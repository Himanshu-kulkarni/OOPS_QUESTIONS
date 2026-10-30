//11. Operator Overloading — Complex Numbers

#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator*(Complex c) {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);

    Complex sum = c1 + c2;
    Complex product = c1 * c2;

    cout << "Addition: ";
    sum.display();

    cout << "Multiplication: ";
    product.display();

    return 0;
}