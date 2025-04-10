#include <stdio.h>
#include <limits.h>

int main() {
    //char
    printf("char: min = %d, max = %d\n", CHAR_MIN, CHAR_MAX);
    // unsigned char
    printf("unsigned char: min = 0, max = %u\n", UCHAR_MAX);

    // short
    printf("short: min = %d, max = %d\n", SHRT_MIN, SHRT_MAX);
    // unsigned short
    printf("unsigned short: min = 0, max = %u\n", USHRT_MAX);

    // int
    printf("int: min = %d, max = %d\n", INT_MIN, INT_MAX);
    // unsigned int
    printf("unsigned int: min = 0, max = %u\n", UINT_MAX);

    // long
    printf("long: min = %ld, max = %ld\n", LONG_MIN, LONG_MAX);
    // unsigned long
    printf("unsigned long: min = 0, max = %lu\n", ULONG_MAX);
    
    return 0;
}