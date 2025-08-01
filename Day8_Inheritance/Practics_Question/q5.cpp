/*
Create Mother and Father classes, both with method show(). In child class inherit both and resolve ambiguity using scope resolution.
*/

#include<iostream>
using namespace std;

class Mother {
public:
    void show() {
        cout << "This is Mother class." << endl;
    }
};

class Father {
public:
    void show() {
        cout << "This is Father class." << endl;
    }
};

class Child : public Mother, public Father {
public:
    void display() {
        cout << "Calling show() from both parents:" << endl;

        Mother::show();  // Scope resolution to call Mother's show
        Father::show();  // Scope resolution to call Father's show
    }
};

int main() {
    Child c;
    c.display();

    return 0;
}
