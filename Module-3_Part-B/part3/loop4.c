#include <stdio.h>

int main() {
    int numbers[10];
    int sumOfEven = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            sumOfEven += numbers[i];
        }
    }

    printf("\nSum of Even Numbers: %d\n", sumOfEven);

    return 0;
}
