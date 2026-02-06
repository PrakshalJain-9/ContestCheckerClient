import sys

def solve():
    # Reading all input at once for efficiency in Python
    input = sys.stdin.read
    data = input().split()
    
    iterator = iter(data)
    try:
        t = int(next(iterator))
        for _ in range(t):
            n = int(next(iterator))
            a = []
            for _ in range(n):
                a.append(int(next(iterator)))
            
            # Since the array is sorted:
            # Option 1: Remove the first element (smallest)
            # Instability = Max(remaining) - Min(remaining) = a[n-1] - a[1]
            diff1 = a[n-1] - a[1]
            
            # Option 2: Remove the last element (largest)
            # Instability = a[n-2] - a[0]
            diff2 = a[n-2] - a[0]
            
            print(min(diff1, diff2))
    except StopIteration:
        pass

if __name__ == "__main__":
    solve()