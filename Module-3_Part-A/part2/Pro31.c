#include <stdio.h>

int main() {
    int weekNumber;

    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    if (weekNumber >= 1 && weekNumber <= 7) {
       
        switch (weekNumber) {
            case 1:
                printf("Day corresponding to week number %d is: Sunday\n", weekNumber);
                break;
            case 2:
                printf("Day corresponding to week number %d is: Monday\n", weekNumber);
                break;
            case 3:
                printf("Day corresponding to week number %d is: Tuesday\n", weekNumber);
                break;
            case 4:
                printf("Day corresponding to week number %d is: Wednesday\n", weekNumber);
                break;
            case 5:
                printf("Day corresponding to week number %d is: Thursday\n", weekNumber);
                break;
            case 6:
                printf("Day corresponding to week number %d is: Friday\n", weekNumber);
                break;
            case 7:
                printf("Day corresponding to week number %d is: Saturday\n", weekNumber);
                break;
        }
    } else {
        printf("Invalid week number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
