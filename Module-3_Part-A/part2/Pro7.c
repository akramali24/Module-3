#include <stdio.h>

int main() {
    
    float height;

    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    if (height < 150) {
        printf("Person is Short.\n");
    } else if (height >= 150 && height < 175) {
        printf("Person is of Average Height.\n");
    } else {
        printf("Person is Tall.\n");
    }

    return 0;
}
