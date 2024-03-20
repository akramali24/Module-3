#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    float pi=3.14;

public:
    void assignRadius(double r) {
        radius = r;
    }

        double calculateArea() {
        return pi * radius * radius;
    }

        double calculateCircumference() {
        return 2 * pi * radius;
    }
};
int main() {
    Circle myCircle;
    myCircle.assignRadius(10);

    cout << "Area: " << myCircle.calculateArea() << endl;
    cout << "Circumference: " << myCircle.calculateCircumference() << endl;

    
}