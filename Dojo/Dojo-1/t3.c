#include <stdio.h>

int main() {
    const float midterm = 45;
    const float final = 90;
    float w1;
    int grade;

    //Check if midterm and final points are valid
    if (midterm < 0 || midterm > 100 || final < 0 || final > 100) {
        printf("Invalid points\n");
        return 1;
    }

    //Midterm coefficient
    if (midterm < 50) {
        w1 = 0;
    } else if (midterm < 75) {
        w1 = 0.2;
    } else {
        w1 = 0.33;
    }
    printf("Midterm coefficient: %.2f\n", w1);

    //Total points
    float total = w1 * midterm + 0.67 * final;
    printf("Total points: %.2f\n", total);

    //Final grade
    if (total < 50) {
        grade = 0;
    } else if (total < 60) {
        grade = 1;
    } else if (total < 70) {
        grade = 2;
    } else if (total < 80) {
        grade = 3;
    } else if (total < 90) {
        grade = 4;
    } else {
        grade = 5;
    }
    printf("Final grade: %d\n", grade);
}