#include <stdio.h>
#include <stdlib.h> 

int* GetSubArray(int* arr, int N) {
    int min = arr[0];
    int max = arr[0];
    int min_index = 0;
    int max_index = 0;
    
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i]; //Find minimum element
            min_index = i;
        }
        if (arr[i] > max) {
            max = arr[i]; //Find maximum element
            max_index = i;
        }
    }

    int new_size = N - 2; //Size of the new subarray
    int* subArray = malloc(new_size * sizeof(int)); //Allocate memory for the subarray

    int j = 0;
    for (int i = 0; i < N; i++) {
        if (i != min_index && i != max_index) {
            subArray[j++] = arr[i];
        }
    }

    return subArray;
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

    //Call function to get subarray
    int* subArray = GetSubArray(arr, N);
    int new_size = N - 2;
    printf("Subarray: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", subArray[i]); //Print the subarray elements
    }
    printf("\n");

    free(arr); //Free the allocated memory
    free(subArray); //Free the subarray memory

    return 0;
}