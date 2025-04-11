#include <stdio.h>
#include <string.h>

int main() {
    char key[] = "3498";
    int guesses = 5;
    char guess[10];

    printf("Enter the key: ");
    while (guesses > 0) {
        scanf("%s", guess);
        if (strcmp(guess, key) == 0) {
            printf("access granted\n");
            return 0;
        } else {
        guesses--;
        printf("wrong password, %d attempts remaining\n", guesses);
        }
    }
    printf("access denied\n");
    return 1;
}