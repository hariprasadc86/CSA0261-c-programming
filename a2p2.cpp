#include <stdio.h>

void findLargestTwo(int arr[], int n)
{
    int firstLargest, secondLargest;
    firstLargest = secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    printf("The largest two elements in the array are: %d and %d\n", firstLargest, secondLargest);
}

int main()
{
    int arr[100], n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLargestTwo(arr, n);

    return 0;
}
