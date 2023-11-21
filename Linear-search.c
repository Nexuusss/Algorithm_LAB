#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Key found at index i
        }
    }
    return -1;  // Key not found
}

int main() {
    int n;

    // Input array size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;

    // Input key to search from the user
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform linear search
    int result = linearSearch(arr, n, key);

    // Print the result
    if (result != -1) {
        printf("Key found at index %d.\n", result);
    } else {
        printf("Key not found in the array.\n");
    }

    return 0;
}
