#include <stdio.h>

int main() {
    int n, term = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", term);
        term *= 3;  
    }

    printf("\n");

    return 0;
}
