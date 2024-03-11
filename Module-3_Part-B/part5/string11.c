#include <stdio.h>
#include <string.h>

int main() {
    int ctr = 0, i, freq = 0; 
    int t, h, e, spc; 
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof str, stdin); 

    ctr = strlen(str);
    for (i = 0; i <= ctr - 3; i++) {
        t = (str[i] == 'i' || str[i] == 'I');
        h = (str[i + 1] == 's' || str[i + 1] == 'S');
        spc = (str[i + 2] == ' ' || str[i + 2] == '\0');

        if ((t && h && spc) == 1)
            freq++;
    }

    printf("The number of the word 'is' is: %d\n\n", freq); 
}
