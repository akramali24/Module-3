#include <stdio.h>

int main() {
    char s1[100] = "akramali";
    char s2[] = " akbarali";
    int length, j;

    // Calculate the length of s1
    length = 0;
    while (s1[length] != '\0') {
        ++length;
    }

    // Concatenate s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++length) {
        s1[length] = s2[j];
    }

    // Terminate the s1 string
    s1[length] = '\0';

    printf("After concatenation: %s\n", s1);
    return 0;
}