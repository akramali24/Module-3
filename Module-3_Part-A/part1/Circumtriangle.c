#include <stdio.h>

int main() {
    double a, b, c, triangle;

    printf("Enter the length of a: ");
    scanf("%lf", &a);

    printf("Enter the length of b: ");
    scanf("%lf", &b);

    printf("Enter the length of c: ");
    scanf("%lf", &c);

    triangle = a + b + c;

    printf("The perimeter of the triangle is: %lf\n", triangle);

    return 0;
}
