//14. Function Overloading and Function Overriding

#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base show" << endl;
    }

    void show(int x) {
        cout << "Base show: " << x << endl;
    }

    virtual void display() {
        cout << "Base display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived display" << endl;
    }
};

int main() {
    Derived d;

    d.show();
    d.show(10);
    d.display();

    return 0;
}