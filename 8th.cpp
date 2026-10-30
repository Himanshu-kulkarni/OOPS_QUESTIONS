// 8. Payment — Function Overriding
#include<iostream>
#include<string>

using namespace std;

class Payment {
public:
    void processPayment() {
        cout << "Processing payment" << endl;
    }
};

class CreditCardPayment : public Payment {
public:
    void processPayment() {
        cout << "Credit card payment" << endl;
    }
};

class UPIPayment : public Payment {
public:
    void processPayment() {
        cout << "UPI payment" << endl;
    }
};

class NetBankingPayment : public Payment {
public:
    void processPayment() {
        cout << "Net banking payment" << endl;
    }
};

int main() {
    CreditCardPayment c;
    UPIPayment u;
    NetBankingPayment n;

    c.processPayment();
    u.processPayment();
    n.processPayment();

    return 0;
}