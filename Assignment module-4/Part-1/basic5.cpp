#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    
    void assignDimensions(double l, double w) {
        length = l;
        width = w;
    }

   
    double calculateArea() {
        return length * width;
    }

    
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};
int main() {
    Rectangle myRectangle;
    myRectangle.assignDimensions(2, 6);

    cout << "Area: " << myRectangle.calculateArea() << endl;
    cout << "Perimeter: " << myRectangle.calculatePerimeter() << endl;

    
}