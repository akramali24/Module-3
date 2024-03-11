#include <stdio.h>

int calculateSum(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = calculateSum(num);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
