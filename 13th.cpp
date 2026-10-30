//13. Run-Time Polymorphism — Employee Salary

#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "Employee salary" << endl;
    }
};

class PermanentEmployee : public Employee {
public:
    void calculateSalary() override {
        cout << "Permanent salary: 30000" << endl;
    }
};

class ContractEmployee : public Employee {
public:
    void calculateSalary() override {
        cout << "Contract salary: 15000" << endl;
    }
};

int main() {
    PermanentEmployee p;
    ContractEmployee c;

    Employee *e;

    e = &p;
    e->calculateSalary();

    e = &c;
    e->calculateSalary();

    return 0;
}