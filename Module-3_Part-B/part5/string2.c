#include <stdio.h>

int main() {
    char inputString[] = "Akramali"; 

    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", inputString[i]);
    }

    return 0;
}
