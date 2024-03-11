#include <stdio.h>

int main() {
    
    float marks;

    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 35.0) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry, you have failed. Better luck next time.\n");
    }

    return 0;
}
