#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    int sum = 0;
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    float average = sum / (float)n;
    printf("Original array: ");
    for(int i = 0; i < n; i++) {  
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int mini = arr[0];
    int maxi = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < mini)
            mini = arr[i];
        if(arr[i] > maxi)
            maxi = arr[i];
    }
    
    // Bubble sort
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {  
            if(arr[j] > arr[j + 1]) {  
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    float median;
    if(n % 2 == 0) { 
        median = (arr[n/2] + arr[n/2 - 1]) / 2.0;
    }
    else {
        median = arr[n/2];
    }
    
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Median: %.2f\n", median);
    printf("Minimum: %d\n", mini);
    printf("Maximum: %d\n", maxi);
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
       
    return 0;
}
