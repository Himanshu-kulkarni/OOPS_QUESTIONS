//15. Abstract Class — Payment Processing System

#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0;
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Credit card payment" << endl;
    }
};

class UPIPayment : public Payment {
public:
    void processPayment() override {
        cout << "UPI payment" << endl;
    }
};

class CashPayment : public Payment {
public:
    void processPayment() override {
        cout << "Cash payment" << endl;
    }
};

int main() {
    CreditCardPayment c;
    UPIPayment u;
    CashPayment cash;

    c.processPayment();
    u.processPayment();
    cash.processPayment();

    return 0;
}