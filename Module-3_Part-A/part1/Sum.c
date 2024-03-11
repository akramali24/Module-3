#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum: %d\n", sum);

    if (sizeof(sum) == sizeof(int)) {
        printf("Size of the sum is equal to the size of an int.\n");
    } else {
        printf("Size of the sum is NOT equal to the size of an int.\n");
    }

    return 0;
}
