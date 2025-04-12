#include <stdio.h>

void ReverseArray(int* arr, int size) {
    int *start = arr; // Pointer to the first element
    int *end = arr + size - 1; // Pointer to the last element
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++; // Move the start pointer forward
        end--; // Move the end pointer backward
    }
}

int main() {
    int size = 5;
    int arr[size];

    // Ask user for array elements
    printf("Enter 5 elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

    // Print the reversed array
    ReverseArray(arr, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}