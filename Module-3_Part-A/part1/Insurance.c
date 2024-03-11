#include <stdio.h>

double calculateInsurancePremium(double salary, double premiumPercentage) {
    return (premiumPercentage / 100.0) * salary;
}

int main() {
    double salary, premiumPercentage, insurancePremium;

    printf("Enter the person's salary: $");
    scanf("%lf", &salary);

    printf("Enter the insurance premium percentage: ");
    scanf("%lf", &premiumPercentage);

    insurancePremium = calculateInsurancePremium(salary, premiumPercentage);

    printf("The insurance premium is: $%.2lf\n", insurancePremium);

    return 0;
}
