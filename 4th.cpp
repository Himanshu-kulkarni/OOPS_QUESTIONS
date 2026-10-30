//4. Person, Student, Employee and TeachingAssistant — Hybrid Inheritance

#include<iostream>
#include<string>

using namespace std;

class Person{
public:
    string name;

    void getperson(){
        cout<<"enter your name: ";
        cin >> name;
    }
};

class Student : virtual public Person{
public:
    int roll;

    void getstudent(){
        cout<<"enter your roll number: ";
        cin >> roll;
    }
};

class Employee : virtual public Person{
public:
    int id;

    void getemployee(){
        cout<<"enter your employee id: ";
        cin >> id;
    }
};

class Teachingassitant : public Student, public Employee{
public:
    void display(){
        cout << "student roll: " << roll;
        cout << "enployee id: " << id; 
        cout << "name: " << name;
    }
};

int main()
{
    Teachingassitant T;
    T.getperson();
    T.getstudent();
    T.getemployee();
    T.display();
    return 0;
}