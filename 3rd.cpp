// 3. Academic and Sports — Multiple Inheritance
#include<iostream>
#include<string>

using namespace std;

class Academic {
public: 
    int marks;
    void getacademic(){
        cout << "Enter your academic marks: ";
        cin >> marks;
    }
};

class Sports {
public:
    int score;

    void getscore(){
        cout << "Enter your sports score: ";
        cin >> score;
    }
};

class Result : public Academic, public Sports {
public:
    void display(){
        cout <<"a" << marks << endl;
        cout <<"s" << score << endl;
        cout <<"avg" << marks + score << endl;
    }
};

int main(){
    Academic A;
    Sports S;
    Result R;

    A.getacademic();
    S.getscore();
    R.display();

    return 0;
}