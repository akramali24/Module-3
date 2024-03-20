#include<iostream>
using namespace std;

class Calculator {
public:
   
    int add(int num1, int num2) {
        return num1 + num2;
    }

    int subtract(int num1, int num2) {
        return num1 - num2;
    }

    int multiply(int num1, int num2) {
        return num1 * num2;
    }

    double divide(int num1, int num2) {
        if (num2 != 0) {
            return (num1) / num2;
        } else {
            cout << "Error: Cannot divide by zero." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator C;
 
    int add = C.add(5, 3);
    cout << "Addition: " << add << endl;

    int sub = C.subtract(10, 4);
    cout << "Subtraction: " << sub << endl;

    int multiply = C.multiply(6, 7);
    cout << "Multiplication: " << multiply << endl;

    double division = C.divide(10,2);
    cout << "Division: " << division << endl;

    return 0;
}
