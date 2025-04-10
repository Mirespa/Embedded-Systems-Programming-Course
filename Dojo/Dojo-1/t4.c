#include <stdio.h>

#define N 10

int main() {
    int sum = 0;
    int i = 1;

    while (i <= N) {
        sum = sum + i;
        printf("%d\n", sum);
        i++;
    }
    printf("Final sum: %d\n", sum);
    return 0;
}