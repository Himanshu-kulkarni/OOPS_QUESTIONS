//1. Student, Marks and Result — Multilevel Inheritance

#include<iostream>
#include <string>

using namespace std;

class Student{
public:
    int roll;
    string name;

    void getstudent(){
        cout <<"enter roll and name: ";
        cin >> roll >> name;
    }
};

class Marks : public Student{
public :
    int m1, m2, m3;

    void getmarks(){
        cout<<"Enter the marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks{
public:
    void display() {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 90)
            cout << "Grade: A";
        else if (percentage >= 75)
            cout << "Grade: B";
        else if (percentage >= 60)
            cout << "Grade: C";
        else
            cout << "Grade: D";
    }
};

int main(){
    Result r;
    r.getstudent();
    r.getmarks();
    r.display();

    return 0;

}