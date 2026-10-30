//12. Virtual Function — Shape Areas

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() {
        cout << "Shape area" << endl;
    }
};

class Circle : public Shape {
public:
    void calculateArea() override {
        cout << "Circle area: " << 3.14 * 5 * 5 << endl;
    }
};

class Rectangle : public Shape {
public:
    void calculateArea() override {
        cout << "Rectangle area: " << 4 * 5 << endl;
    }
};

class Triangle : public Shape {
public:
    void calculateArea() override {
        cout << "Triangle area: " << 0.5 * 4 * 5 << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    Shape *p;

    p = &c;
    p->calculateArea();

    p = &r;
    p->calculateArea();

    p = &t;
    p->calculateArea();

    return 0;
}