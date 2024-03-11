#include <stdio.h>

int main() {
    int totalMinutes;
    double totalSeconds, totalHours;

    const int secondsInMinute = 60;
    const double minutesInHour = 60.0;

    printf("Enter total minutes: ");
    scanf("%d", &totalMinutes);

    totalSeconds = totalMinutes * secondsInMinute;
    totalHours = totalMinutes / minutesInHour;

    printf("%d minutes is equal to %.2lf seconds or %.2lf hours\n", totalMinutes, totalSeconds, totalHours);

    return 0;
}
