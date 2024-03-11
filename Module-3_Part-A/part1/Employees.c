#include <stdio.h>

int main() {
    char names[5][50];
    double salaries[5];
    double totalSalary = 0, averageSalary;

    for (int i = 0; i < 5; ++i) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter salary of employee %d: $", i + 1);
        scanf("%lf", &salaries[i]);

        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / 5;

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Employee %d: %s, Salary: $%.2lf\n", i + 1, names[i], salaries[i]);
    }

    printf("\nTotal Salary: $%.2lf\n", totalSalary);
    printf("Average Salary: $%.2lf\n", averageSalary);

    return 0;
}
