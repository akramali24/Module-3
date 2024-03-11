#include <stdio.h>

double calculateAnnualSalary(double monthlySalary) {
    return 12 * monthlySalary;
}

int main() {
    double monthlySalary, annualSalary;

    printf("Enter the person's monthly salary: $");
    scanf("%lf", &monthlySalary);

    annualSalary = calculateAnnualSalary(monthlySalary);

    printf("The person's annual salary is: $%.2lf\n", annualSalary);

    return 0;
}
