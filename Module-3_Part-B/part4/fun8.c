#include <stdio.h>
#include <string.h>

struct Employee {
    int empNo;
    char empName[50];
    char address[100];
    int age;
};

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int isPalindrome(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    reverseString(inputString);

    printf("Reversed String: %s\n", inputString);

    if (isPalindrome(inputString)) {
        printf("The original string is a palindrome.\n");
    } else {
        printf("The original string is not a palindrome.\n");
    }

    struct Employee employees[5];

    printf("\nEnter Information for Five Employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empNo);
        getchar(); 
        printf("Employee Name: ");
        fgets(employees[i].empName, sizeof(employees[i].empName), stdin);
        employees[i].empName[strcspn(employees[i].empName, "\n")] = '\0'; // Remove the newline character
        printf("Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = '\0'; // Remove the newline character
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Information for Five Employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printEmployee(employees[i]);
    }

    return 0;
}
