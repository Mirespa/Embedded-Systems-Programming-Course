#include <stdio.h>
#include <stdlib.h> //Include stdlib for malloc and free

int GetSum(int* arr, int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int N;

    //Ask user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    //Dynamically allocate memory for the array
    int* arr = malloc(N * sizeof(int));

    //Ask user to enter the elements of the array
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = GetSum(arr, N);
    printf("Sum of the array elements: %d\n", sum);

    free(arr); //Free the allocated memory

    return 0;
}