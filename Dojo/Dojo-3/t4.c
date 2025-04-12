#include <stdio.h>

int CountVowels(char* str) {
    int count = 0;
    char* ptr = str; //Pointer to the string

    for(; *ptr != '\0'; ptr++) { //Iterate until null terminator
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            count++; //Increment count if vowel is found
        }
    }

    return count; //Return the total count of vowels

}

int main() {
    char str[29]; //String size 28 + 1 for null terminator

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //Read string from user
    printf("You entered: %s\n", str); //Print the entered string

    int vowelCount = CountVowels(str); //Call function to count vowels
    printf("Number of vowels in the string: %d\n", vowelCount); //Print the count of vowels
}