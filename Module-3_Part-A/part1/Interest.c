#include <stdio.h>
#include <math.h>

double calculateCompoundInterest(double principal, double rate, int time, int compPerYear) {
    double compoundInterest;

    rate = rate / 100.0;

    compoundInterest = principal * pow(1 + rate / compPerYear, compPerYear * time) - principal;

    return compoundInterest;
}

int main() {
    double principal, rate;
    int time, compPerYear;
    double compoundInterest;

    printf("Enter the principal amount: $");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time the money is invested/borrowed for (in years): ");
    scanf("%d", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compPerYear);

    compoundInterest = calculateCompoundInterest(principal, rate, time, compPerYear);

    printf("The compound interest is: $%.2lf\n", compoundInterest);

    return 0;
}
