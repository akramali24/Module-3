#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
   
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }

    void setCountry(string c) {
        country = c;
    }

    string getCountry() {
        return country;
    }
};
int main() {
    Person myPerson;
    myPerson.setName("Akramali");
    myPerson.setAge(21);
    myPerson.setCountry("India");

    cout << "Name: " << myPerson.getName() << endl;
    cout << "Age: " << myPerson.getAge() << endl;
    cout << "Country: " << myPerson.getCountry() << endl;

    
}