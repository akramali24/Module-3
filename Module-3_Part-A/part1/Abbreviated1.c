#include <stdio.h>
#include <string.h>

void abbreviateCountryName(char *fullName, char *abbreviation) {
    int i, j = 0, len = strlen(fullName);

    abbreviation[j++] = fullName[0];

    for (i = 1; i < len; i++) {
        if (fullName[i - 1] == ' ' && fullName[i] != ' ') {
            abbreviation[j++] = fullName[i];
        }
    }

    abbreviation[j] = '\0';
}

int main() {
    char fullName[100], abbreviation[20];

    printf("Enter the full name of the country: ");
    fgets(fullName, sizeof(fullName), stdin);

    fullName[strcspn(fullName, "\n")] = '\0';

    abbreviateCountryName(fullName, abbreviation);

    printf("Abbreviated form: %s\n", abbreviation);

    return 0;
}
