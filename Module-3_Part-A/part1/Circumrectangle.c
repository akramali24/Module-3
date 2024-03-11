#include <stdio.h>

int main() {
    double a, c;

    printf("Enter the side length of the rectangle: ");
    scanf("%lf", & a );

    c = 4 * a;

    printf("The circumference of the rectangle is: %lf\n", c);

    return 0;
}
