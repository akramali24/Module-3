#include <stdio.h>

int main() {
    int count = 0;
    int evenCount = 0, oddCount = 0;
    int num;

    while (count < 5) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        ++count;
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
