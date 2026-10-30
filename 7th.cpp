//7. Function Overriding and Scope Resolution Operator

#include<iostream>
#include<string>

using namespace std;

class Employee {
public :
    void display(){
        cout << "Employee display"<<endl;
    }
};

class Manager : public Employee {
public :
    void display(){
        cout << "Manager display"<<endl;
    }
};

int main()
{
    Manager m;
    m.Employee::display();
    m.display();

    return 0;
}