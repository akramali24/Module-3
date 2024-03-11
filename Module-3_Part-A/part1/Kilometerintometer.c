#include <stdio.h>

int main() {
    double kilometers, meters;

    const double metersInKilometer = 1000.0;

    printf("Enter distance in kilometers: ");
    scanf("%lf", &kilometers);

    meters = kilometers * metersInKilometer;

    printf("%.2lf kilometers is equal to %.2lf meters\n", kilometers, meters);

    return 0;
}
