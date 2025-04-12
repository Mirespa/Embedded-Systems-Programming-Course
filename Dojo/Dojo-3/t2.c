#include <stdio.h>

int PrintArraySum(int* arr, int size) {
    int sum = 0;

    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Accessing array elements using pointer
        sum += arr[i];
    }

    printf("\n");
    return sum; // Return the sum of the array elements
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arraySum = PrintArraySum(arr, 5);
    printf("Sum of array elements is: %d\n", arraySum);
    return 0;
}