#include <stdio.h>

int main() {
    double l, w, h, A;

    printf("Enter the length of the rectangular prism: ");
    scanf("%lf", &l);

    printf("Enter the width of the rectangular prism: ");
    scanf("%lf", &w);

    printf("Enter the height of the rectangular prism: ");
    scanf("%lf", &h);

    A = 2 * (l * w + h * l + h * w);

    printf("The surface area of the rectangular prism is: %lf\n", A);

    return 0;
}
