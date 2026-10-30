// 6. Constructors and Destructors — Vehicle and Car

#include<iostream>
#include<string>

using namespace std;

class Vehicle {
public:
    Vehicle(){
        cout << "Vehicle default constructor" <<endl;
    }

    Vehicle(int x){
        cout << "Vehicle paramaterized constructor" << endl;
    }

    ~Vehicle(){
        cout << "Vehicle destructor" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() : Vehicle() {
        cout << "Car default constructor" << endl;
    }

    Car(int x) : Vehicle(x){
        cout << "Car parameterized constructor" << endl;
    }

    ~Car(){
        cout << "Car destructor" << endl;
    }
};

int main()
{
    Car c1;
    Car c2(10);

    return 0;
}