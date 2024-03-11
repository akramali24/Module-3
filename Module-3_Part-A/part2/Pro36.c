#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  

    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if (isalpha(ch)) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input. Please enter an alphabet character.\n");
            }
    }

    return 0;
}
