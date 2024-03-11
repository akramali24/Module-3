#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12) {
        
        switch (monthNumber) {
            case 1:
                printf("Month corresponding to number %d is: January\n", monthNumber);
                break;
            case 2:
                printf("Month corresponding to number %d is: February\n", monthNumber);
                break;
            case 3:
                printf("Month corresponding to number %d is: March\n", monthNumber);
                break;
            case 4:
                printf("Month corresponding to number %d is: April\n", monthNumber);
                break;
            case 5:
                printf("Month corresponding to number %d is: May\n", monthNumber);
                break;
            case 6:
                printf("Month corresponding to number %d is: June\n", monthNumber);
                break;
            case 7:
                printf("Month corresponding to number %d is: July\n", monthNumber);
                break;
            case 8:
                printf("Month corresponding to number %d is: August\n", monthNumber);
                break;
            case 9:
                printf("Month corresponding to number %d is: September\n", monthNumber);
                break;
            case 10:
                printf("Month corresponding to number %d is: October\n", monthNumber);
                break;
            case 11:
                printf("Month corresponding to number %d is: November\n", monthNumber);
                break;
            case 12:
                printf("Month corresponding to number %d is: December\n", monthNumber);
                break;
        }
    } else {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
