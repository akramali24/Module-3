#include <stdio.h>

int main() {
    double temperatureFahrenheit, temperatureCelsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &temperatureFahrenheit);

    temperatureCelsius = (5.0 / 9.0) * (temperatureFahrenheit - 32);

    printf("Temperature in Celsius: %.2lf\n", temperatureCelsius);

    return 0;
}
