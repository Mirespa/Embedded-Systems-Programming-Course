#include <stdio.h>

// Function to swap two integers using pointers
void swap(int* a, int* b) {
    int temp = *a; 
    *a = *b; 
    *b = temp;
}

int main () {
    int num1;
    int num2;

    printf("Enter two numbers: ");  //Prompt user for input
    scanf("%d %d", &num1, &num2);  //Read two integers from user
    
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);  //Display values before swap
    swap(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);  //Display values after swap

    return 0;
}