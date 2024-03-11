#include <stdio.h>

int main() {
    int totalYears, totalDays;

    const int daysInYear = 365; 
    
    printf("Enter total years: ");
    scanf("%d", &totalYears);

    totalDays = totalYears * daysInYear;

    printf("%d years is equal to %d days\n", totalYears, totalDays);

    printf("Enter total days: ");
    scanf("%d", &totalDays);

    totalYears = totalDays / daysInYear;

    printf("%d days is equal to %d years\n", totalDays, totalYears);

    return 0;
}
