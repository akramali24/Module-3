#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        factorial *= i;
        ++i;
    }

    printf("The factorial of %d is %llu\n", num, factorial);

    return 0;
}
