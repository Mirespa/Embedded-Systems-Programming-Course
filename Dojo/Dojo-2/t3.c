#include <stdio.h>

//Function to print matrix
void printMatrix(char matrix[9][9], int size) {
    for (int i = 0; i < size; i++) {  //Loop through rows
        for (int j = 0; j < size; j++) {  //Loop through columns
            printf("%c", matrix[i][j]);  //Print each element
        }
    printf("\n");  //New line after each row
    }
}

//Function to initialize matrix with 0s
void initializeMatrix(char matrix[9][9], int size) {
    for (int i = 0; i < size; i++) {  //Loop through rows
        for (int j = 0; j < size; j++) {  //Loop through columns
            matrix[i][j] = '0';  //Initialize each element to 0
        }
    }
}

//Pattern 1: Left diagonal
void patternLeftDiagonal(char matrix[9][9], int size) {
    for (int i = 0; i < size; i++) {
        matrix[i][i] = '*';  //Set left diagonal to '*'
    }
}

//Pattern 2: Right diagonal
void patternRightDiagonal(char matrix[9][9], int size) {
    for (int i = 0; i < size; i++) {
        matrix[i][size - 1 - i] = '*';  //Set right diagonal to '*'
    }
}


//Pattern 3: Borders
void patternBorders(char matrix[9][9], int size) {
    for (int i = 0; i < size; i++) {
        matrix[0][i] = '*';  //Top border
        matrix[size - 1][i] = '*';  //Bottom border
        matrix[i][0] = '*';  //Left border
        matrix[i][size - 1] = '*';  //Right border
    }
}

//Pattern 4: Plus
void patternPlus(char matrix[9][9], int size) {
    for (int i = 0; i < size; i++) {
        matrix[size / 2][i] = '*';  //Horizontal line
        matrix[i][size / 2] = '*';  //Vertical line
    }
}

int main() {
    int size = 5;  //Size of the matrix
    char matrix[9][9];  //9x9 matrix
    int choice;

    initializeMatrix(matrix, size);  //Initialize the matrix

    printf("Choose a pattern:\n");
    printf("1. Left diagonal\n");
    printf("2. Right diagonal\n");
    printf("3. Borders\n");
    printf("4. Plus\n");
    scanf("%d", &choice);  //Get user choice

    switch (choice) {
    case 1:
        patternLeftDiagonal(matrix, size);
        break;
    
    case 2:
        patternRightDiagonal(matrix, size);
        break;

    case 3:
        patternBorders(matrix, size);
        break;

    case 4: 
        patternPlus(matrix, size);
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }

    printMatrix(matrix, size);  //Print the matrix
    return 0;

}