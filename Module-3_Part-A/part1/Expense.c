#include <stdio.h>

int main() {
    double expenses[5];
    double totalExpense = 0, averageExpense;

    for (int i = 0; i < 5; ++i) {
        printf("Enter expense %d: $", i + 1);
        scanf("%lf", &expenses[i]);

        totalExpense += expenses[i];
    }

    averageExpense = totalExpense / 5;

    printf("\nExpense Details:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Expense %d: $%.2lf\n", i + 1, expenses[i]);
    }

    printf("\nTotal Expense: $%.2lf\n", totalExpense);
    printf("Average Expense: $%.2lf\n", averageExpense);

    return 0;
}
