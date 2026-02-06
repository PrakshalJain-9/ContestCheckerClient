// // Algorithm Club - Enhanced Debugging Challenge
// // Title: "Array Statistics & Sorting Bug Hunt"
// // Task: Find and fix ALL errors in this code, then submit with test input

// import java.util.Scanner;

// public class BuggyArrayStats {
//     public static void main(String[] args) {

//         Scanner sc = new Scanner(System.in);

//         int n;
//         System.out.print("Enter number of elements: ");
//         n = sc.nextInt();

//         int[] arr = new int[n];  
//         int sum;                

//         System.out.print("Enter " + n + " numbers: ");
//         for (int i = 1; i <= n; i++) {  
//             arr[i] = sc.nextInt();
//         }

//         for (int i = 0; i < n; i++) {
//             sum += arr[i];            
//         }

//         float average = sum / n;       

//         System.out.print("Original array: ");
//         for (int i = 0; i <= n; i++) {  
//             System.out.print(arr[i] + " ");
//         }
//         System.out.println();

//         int min = arr[0];
//         int max = arr[0];

//         for (int i = 0; i < n; i++) {
//             if (arr[i] < min)
//                 min == arr[i];          
//             if (arr[i] > max)
//                 max = arr[i];
//         }

//         // Bubble Sort
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n - i; j++) {   
//                 if (arr[j] > arr[j + 1]) {      
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] == temp;         
//                 }
//             }
//         }

//         System.out.print("Sorted array: ");
//         for (int i = 0; i < n; i++) {
//             System.out.print(arr[i] + " ");
//         }
//         System.out.println();

//         float median;
//         if (n % 2 = 0) {   
//             median = (arr[n / 2] + arr[n / 2 - 1]) / 2;  
//         } else {
//             median = arr[n / 2];
//         }

//         int evenCount, oddCount;   

//         for (int i = 0; i < n; i++) {
//             if (arr[i] % 2 = 0)   
//                 evenCount++;
//             else
//                 oddCount++;
//         }

//         System.out.println("Sum: " + sum);
//         System.out.println("Average: " + average);  
//         System.out.println("Median: " + median);
//         System.out.println("Minimum: " + min);
//         System.out.println("Maximum: " + max);
//         System.out.println("Even numbers: " + evenCount);
//         System.out.println("Odd numbers: " + oddCount);

//     }  
// }
