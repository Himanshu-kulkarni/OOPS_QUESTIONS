//2. Shape, Circle, Rectangle and Triangle — Hierarchical Inheritance

#include<iostream>
#include<string>
using namespace std;

class Shape {
public:
    float l, b, r, h;

    void circle(){
        cout << "Enter the radius of the circle: ";
        cin >> r;
        cout << "Circle area: " << 3.14 * r * r << endl;
    }

    void rectangle(){
        cout << "Enter the length and breadth of the rectangle: ";
        cin >> l >> b;
        cout << "Rectangle area: " << l * b << endl;
    }

    void triangle(){
        cout << "Enter the base and height of the triangle: ";
        cin >> b >> h;
        cout << "Triangle area: " << 0.5 * b * h << endl;
    }
};

class Rectangle : public Shape {};
class Circle : public Shape {};
class Triangle : public Shape {};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.circle();
    r.rectangle();
    t.triangle();
    return 0;
}