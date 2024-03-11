#include <stdio.h>
#include <string.h>

void getString(int pos, int len, int c, char string[]) {
    char substring[1000];
    while (c < len) {
        substring[c] = string[pos + c - 1];
        c++;
    }
    substring[c] = '\0'; 
    printf("%s\n", substring);
}

int main() {
    int pos, len, c = 0;
    char string[] = "akramali";
    pos = 6;
    len = 5;
    printf("String: %s\n", string);
    printf("Substring is: ");
    getString(pos, len, c, string);

    char string2[] = "abcde";
    pos = 1;
    len = 3;
    c = 0;
    printf("\nString: %s\n", string2);
    printf("Substring is: ");
    getString(pos, len, c, string2);

    return 0;
}
