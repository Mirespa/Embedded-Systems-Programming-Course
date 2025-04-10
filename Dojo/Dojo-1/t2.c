#include <stdio.h>

int main() {
    const int a = 5;
    const int b = 3;
    const int c = 9;

    //a)
    int d = (a>b) ? a : b;
    printf("Biggest number of %d and %d is %d\n", a, b, d);

    //b)
    int e = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    printf("Biggest number of %d, %d and %d is %d\n", a, b, c, e);
    
    return 0;
}