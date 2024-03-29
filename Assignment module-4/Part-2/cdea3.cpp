#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string company;
    string model;
    int year;

public:
    Car(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    // Setter functions
    void setCompany(string c) {
        company = c;
    }

    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }
};

int main() {
    Car car1("honda", "Model S", 2015);

    cout << "Company: " << car1.getCompany() << endl;
    cout << "Model: " << car1.getModel() << endl;
    cout << "Year: " << car1.getYear() << endl;

    car1.setCompany("Ford");
    car1.setModel("Mustang");
    car1.setYear(2018);

    cout << "Company: " << car1.getCompany() << endl;
    cout << "Model: " << car1.getModel() << endl;
    cout << "Year: " << car1.getYear() << endl;

    return 0;
}