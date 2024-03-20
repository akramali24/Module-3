#include <iostream>
using namespace std;

inline float multiply(float x, float y) {
    return x * y;
}

inline float cube(float x) {
    return x * x * x;
}

int main() {
    float val1, val2;

    cout << "Enter two values: ";
    cin >> val1 >> val2;

    cout << "Multiplication value is: " << multiply(val1, val2) << endl;
    cout << "Cube value of [" << val1 << "] is: " << cube(val1) << endl;
    cout << "Cube value of [" << val2 << "] is: " << cube(val2) << endl;

    
}