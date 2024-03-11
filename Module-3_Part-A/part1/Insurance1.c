#include <stdio.h>

double calculateInsurancePremium(double salary) {
    return 0.10 * salary;
}

double calculateLoanInstallment(double salary) {
    return 0.10 * salary;
}

int main() {
    double monthlySalary, insurancePremium, loanInstallment, remainingSalary;

    printf("Enter the person's monthly salary: $");
    scanf("%lf", &monthlySalary);

    insurancePremium = calculateInsurancePremium(monthlySalary);

    loanInstallment = calculateLoanInstallment(monthlySalary);

    remainingSalary = monthlySalary - insurancePremium - loanInstallment;

    printf("Monthly Salary: $%.2lf\n", monthlySalary);
    printf("Insurance Premium (10%%): $%.2lf\n", insurancePremium);
    printf("Loan Installment (10%%): $%.2lf\n", loanInstallment);
    printf("Remaining Salary: $%.2lf\n", remainingSalary);

    return 0;
}
