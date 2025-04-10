#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    char op;
    
    //Ask user for two numbers and an operator
    printf("Enter first number: \n");
    if (scanf("%f", &a) != 1) {

        printf("Error: Invalid input for first number.\n");
        return 1;
    }

    printf("Enter second number: \n");
    if (scanf("%f", &b) != 1) {
        printf("Error: Invalid input for second number.\n");
        return 1;
    }

    printf("Enter operation (+, -, *, /, %%): \n");
    scanf(" %c", &op);

    //Perform the operation
    switch (op) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;
        case '-':
            printf("Result: %.2f\n", a - b);
            break;
        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %.2f\n", a / b);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("Result: %f\n", fmodf(a, b));
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operator %c\n", op);
    }

    return 0;
}