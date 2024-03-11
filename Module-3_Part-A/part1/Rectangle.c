#include <stdio.h>

int main() {
    double w, l, A;

    
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &w);

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &l);

   A = w * l;

    printf("The area of the rectangle is: %lf\n", A);

    return 0;
}
