#include <stdio.h>

int main() {
    double a, C;

    printf("Enter the side length of the square: ");
    scanf("%lf", &a);

    C = 4 * a;

    printf("The circumference of the square is: %lf\n", C);

    return 0;
}
