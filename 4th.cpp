//4. Person, Student, Employee and TeachingAssistant — Hybrid Inheritance


#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void getPerson() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    int roll;

    void getStudent() {
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Employee : public Person {
public:
    int id;

    void getEmployee() {
        cout << "Enter employee ID: ";
        cin >> id;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    void display() {
        cout << "Student Roll: " << roll << endl;
        cout << "Employee ID: " << id << endl;
    }
};

int main() {
    TeachingAssistant t;
    t.getStudent();
    t.getEmployee();
    t.display();
    return 0;
}
