#include <stdio.h>

int main() {
    int arr[] = { 5, 12, 6, 3, 9, 2, 1, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_diff = arr[1] - arr[0];
    int min_element = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - min_element > max_diff) {
            max_diff = arr[i] - min_element;
        }
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }

    printf("The maximum difference is: %d", max_diff);
    return 0;
}
