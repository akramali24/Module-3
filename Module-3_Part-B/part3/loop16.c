#include <stdio.h>

unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int numbers[5];

    printf("Enter 5 numbers, one at a time:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nFactorials of entered numbers:\n");
    for (int i = 0; i < 5; ++i) {
        unsigned long long result = factorial(numbers[i]);
        printf("Factorial of %d is %llu\n", numbers[i], result);
    }

    return 0;
}
