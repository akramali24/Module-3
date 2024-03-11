#include <stdio.h>

int main() {
    int numberOfStudents;
    int applesPerStudent = 5; 

    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    int totalApples = numberOfStudents * applesPerStudent;

    printf("Total number of apples required: %d\n", totalApples);

    return 0;
}