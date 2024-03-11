#include <stdio.h>

int findMaxDigit(int num) {
    int maxDigit = 0;

    while (num != 0) {
        int digit = num % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num /= 10;
    }

    return maxDigit;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int maxDigit = findMaxDigit(num);
    printf("Max digit in the number: %d\n", maxDigit);

    return 0;
}
