// 10. Function Overloading — Area of Circle, Rectangle and Square

#include<iostream>
#include<string>

using namespace std;

class Area {
public:
    float area(float r){
        return 3.14*r*r;
    }

    int area(int l, int b){
        return l*b;
    }

    int area(int s){
        return s*s;
    }
};

int main(){
    Area a;

    cout << "Circle: " << a.area(2.25f) << endl;
    cout << "Rectangle" << a.area(4,5) << endl;
    cout << "Square" << a.area(5) << endl;

    return 0;
}