#include <stdio.h>

int main() {
    int totalYears;
    double totalDays, totalMonths;

    const double daysInMonth = 30.44; 
    const int daysInYear = 365;     

    printf("Enter total years: ");
    scanf("%d", &totalYears);

    totalDays = totalYears * daysInYear;
    totalMonths = totalYears * 12.0;

    printf("%d years is approximately %.2lf months or %.2lf days\n", totalYears, totalMonths, totalDays);

    return 0;
}
