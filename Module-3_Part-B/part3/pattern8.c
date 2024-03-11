#include <stdio.h>

#define ROWS 5
#define COLS 10

int main() {
    int count = 1;

    for (int i = 1; i <= ROWS; i++) {
        for (int j = 1; j <= COLS; j++) {
            printf("%02d ", count++);
        }
        printf("\n");
    }

    return 0;
}
