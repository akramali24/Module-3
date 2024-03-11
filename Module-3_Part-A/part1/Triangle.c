#include <stdio.h>

int main() {
    double b, h, A;

    printf("Enter the length of the base of the triangle: ");
    scanf("%lf", &b);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &h );

    A = 0.5 * b * h;

    printf("The area of the triangle is: %lf\n", A );

    return 0;
}