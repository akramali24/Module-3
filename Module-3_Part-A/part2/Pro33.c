#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12) {
        int daysInMonth;

        switch (monthNumber) {
            case 1:  // January
            case 3:  // March
            case 5:  // May
            case 7:  // July
            case 8:  // August
            case 10: // October
            case 12: // December
                daysInMonth = 31;
                break;
            case 4:  // April
            case 6:  // June
            case 9:  // September
            case 11: // November
                daysInMonth = 30;
                break;
            case 2:  // February
                daysInMonth = 28; 
                break;
        }

        printf("Number of days in month %d: %d\n", monthNumber, daysInMonth);
    } else {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
