//5. Virtual Base Class — Diamond Problem

#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : virtual public Person {};
class Employee : virtual public Person {};

class TeachingAssistant : public Student, public Employee {
public:
    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    TeachingAssistant t;
    t.getName();
    t.display();
    return 0;
}
