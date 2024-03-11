#include <stdio.h>

int sumFirstAndLastDigit(int num) {
    int lastDigit, firstDigit;

    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    return firstDigit + lastDigit;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = sumFirstAndLastDigit(num);
    printf("Sum of first and last digit: %d\n", result);

    return 0;
}
