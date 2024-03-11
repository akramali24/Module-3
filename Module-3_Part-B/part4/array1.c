#include <stdio.h>
#include <string.h>

int main() {
    char studentNames[5][50]; 
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(studentNames[i], sizeof(studentNames[i]), stdin);

        studentNames[i][strcspn(studentNames[i], "\n")] = '\0';
    }

    printf("\nNames of students:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, studentNames[i]);
    }

    return 0;
}
