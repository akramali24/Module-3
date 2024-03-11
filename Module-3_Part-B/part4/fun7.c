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

    struct Employee emp;

    printf("\nEnter Employee Information:\n");
    printf("Employee Number: ");
    scanf("%d", &emp.empNo);
    getchar(); 
    printf("Employee Name: ");
    fgets(emp.empName, sizeof(emp.empName), stdin);
    emp.empName[strcspn(emp.empName, "\n")] = '\0'; 
    printf("Address: ");
    fgets(emp.address, sizeof(emp.address), stdin);
    emp.address[strcspn(emp.address, "\n")] = '\0';
    printf("Age: ");
    scanf("%d", &emp.age);

    printf("\nEmployee Information:\n");
    printEmployee(emp);

    return 0;
}
