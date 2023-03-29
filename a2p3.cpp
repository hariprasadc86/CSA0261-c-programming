#include <stdio.h>

int main() {
    int arr[10] = {2, 6, 9, 4, 7, 5, 8, 3, 1, 10};
    int n = 10;
    int largest = arr[0], secondLargest = arr[0];
    int smallest = arr[0], secondSmallest = arr[0];
       for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }


    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);
    printf("The second largest element in the array is: %d\n", secondLargest);
    printf("The smallest element in the array is: %d\n", smallest);
    printf("The second smallest element in the array is: %d\n", secondSmallest);

    return 0;
}
