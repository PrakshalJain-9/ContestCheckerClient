// // Algorithm Club - Enhanced Debugging Challenge
// // Title: "Array Statistics & Sorting Bug Hunt"
// // Task: Find and fix ALL errors in this code, then submit with test input

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
    
//     int arr[n]; 
//     int sum;     
    
//     cout << "Enter " << n << " numbers: ";
//     for(int i = 1; i <= n; i++) {  
//         cin >> arr[i];
//     }
    
//     // Calculate sum
//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
    
//     float average = sum / n; 
    
//     cout << "Original array: ";
//     for(int i = 0; i <= n; i++) { 
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     // Find minimum and maximum
//     int min = arr[0];
//     int max = arr[0];
//     for(int i = 0; i < n; i++) {
//         if(arr[i] < min)
//             min == arr[i]; 
//         if(arr[i] > max)
//             max = arr[i];
//     }
    
//     // Bubble Sort to sort array in ascending order
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n - i; j++) {  
//             if(arr[j] > arr[j + 1]) { 
//                 // Swap elements
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] == temp; 
//             }
//         }   
//     }
    
//     cout << "Sorted array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     // Find median
//     float median;
//     if(n % 2 == 0) {  
//         median = (arr[n/2] + arr[n/2 - 1]) / 2; 
//     }
//     else {
//         median = arr[n/2];
//     }
    
//     // Count even and odd numbers
//     int evenCount, oddCount; 
//     for(int i = 0; i < n; i++) {
//         if(arr[i] % 2 == 0) 
//             evenCount++;
//         else
//             oddCount++;
//     }
    
//     // Print statistics
//     cout << "Sum: " << sum << endl;
//     cout << "Average: " << average << endl;  
//     cout << "Median: " << median << endl;
//     cout << "Minimum: " << min << endl;
//     cout << "Maximum: " << max << endl;
//     cout << "Even numbers: " << evenCount << endl;
//     cout << "Odd numbers: " << oddCount << endl;
    
//     return 0
// }  
