#include <stdio.h>

int main() {
    int totalDays;
    double months;

    printf("Enter total days: ");
    scanf("%d", &totalDays);

    months = totalDays / 30.44;

    printf("%d days is approximately %.2lf months\n", totalDays, months);

    return 0;
}
