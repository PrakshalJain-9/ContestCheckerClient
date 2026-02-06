import socket
import json
import sys
import os

# --- CONFIG ---
# CHANGE THIS TO THE SERVER'S IP ADDRESS
SERVER_IP = '172.22.1.180'  # <--- Update this to your (Organizer's) IP
SERVER_PORT = 9999

def get_local_ip():
    """Detects the actual LAN IP of this computer."""
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.settimeout(0)
    try:
        # doesn't have to be reachable, just prompts OS to pick an interface
        s.connect(('10.254.254.254', 1))
        ip = s.getsockname()[0]
    except Exception:
        ip = '127.0.0.1'
    finally:
        s.close()
    return ip

def submit_code(player_name, question_id, file_path):
    if not os.path.exists(file_path):
        print(f"Error: File '{file_path}' not found!")
        return

    # Read the code
    try:
        with open(file_path, 'r') as f:
            code_content = f.read()
    except Exception as e:
        print(f"Error reading file: {e}")
        return

    ext = file_path.split('.')[-1]
    client_ip = get_local_ip()

    # Prepare Payload with IP
    payload = {
        'name': player_name,
        'q_id': question_id,
        'ext': ext,
        'code': code_content,
        'ip': client_ip  # <--- Sending IP here
    }

    try:
        client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        client.connect((SERVER_IP, SERVER_PORT))
        
        # Send Data
        print(f"[*] Sending submission from IP: {client_ip}...")
        client.send(json.dumps(payload).encode('utf-8'))
        
        # Receive Verdict
        response = client.recv(4096).decode('utf-8')
        print("\n--- JUDGE RESPONSE ---")
        print(response)
        print("----------------------")
        
    except ConnectionRefusedError:
        print(f"Could not connect to Server at {SERVER_IP}:{SERVER_PORT}")
    except Exception as e:
        print(f"Error: {e}")
    finally:
        client.close()

if __name__ == "__main__":
    if len(sys.argv) < 4:
        print("Usage: python3 submit.py <Name> <Q_ID> <CodeFile>")
        print("Example: python3 submit.py Rohit Q1 solution.cpp")
    else:
        submit_code(sys.argv[1], sys.argv[2], sys.argv[3])
