#include <stdio.h>

int main() {
    int count = 0;
    int sum = 0;
    int num;

    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);
        sum += num;
        ++count;
    }
    printf("Sum of the 10 numbers is: %d\n", sum);

    return 0;
}
