#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: \n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &num);

    printFibonacci(num);

    return 0;
}
