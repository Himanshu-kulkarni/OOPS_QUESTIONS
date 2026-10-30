// 9. Student Class — this Pointer

#include<iostream>
#include<string>

using namespace std;

class Student {
public : 
    int rollno;
    string name;
    float marks;

    Student(int rollno, string name, float marks){
        this->rollno = rollno;
        this->name = name;
        this->marks = marks;
    }

    void display(){
        cout << "Roll No: " << rollno << endl;
        cout << "name: " << name << endl;
        cout << "marks: " << marks << endl;
    }
};

int main(){
    Student s(1, "himanshu", 90);
    s.display();
    return 0;
}