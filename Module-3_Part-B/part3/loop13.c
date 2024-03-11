#include <stdio.h>

int main() {
    char names[5][50]; 
    printf("Enter 5 names, one at a time:\n");
    for (int i = 1; i < 6; ++i) {
        printf("Enter name %d: ", i);
        scanf("%s", names[i]);
    }

    printf("\nEntered names:\n");
    for (int i = 1; i < 6; ++i) {
        printf("%d. %s\n", i , names[i]);
    }

    return 0;
}
