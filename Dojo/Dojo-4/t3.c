#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char name[20];
    int points;
} Student_t;

void PrintStudentDetails(Student_t* studs, int N) {
    for (int i = 0; i < N; i++) {
        printf("Student %d: %s, Points: %d\n", i + 1, studs[i].name, studs[i].points);
    }
}

int main() {
    int N;

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &N);

    // Dynamically allocate memory for the array of students
    Student_t* studs = malloc(N * sizeof(Student_t));

    // Ask user to enter the details of each student
    for (int i = 0; i < N; i++) {
        printf("Enter students name and points for student %d: ", i + 1);
        scanf("%s %d", studs[i].name, &studs[i].points);
    }

    // Call function to print student details
    PrintStudentDetails(studs, N);

    // Free the allocated memory
    free(studs);

    return 0;
}