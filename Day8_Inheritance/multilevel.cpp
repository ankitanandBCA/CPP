#include <iostream>
using namespace std;

// Base class
class Grandfather {
public:
    void showGrandfather() {
        cout << "I am the Grandfather." << endl;
    }
};

// Derived from Grandfather
class Father : public Grandfather {
public:
    void showFather() {
        cout << "I am the Father." << endl;
    }
};

// Derived from Father (Multilevel Inheritance)
class Child : public Father {
public:
    void showChild() {
        cout << "I am the Child." << endl;
    }
};

int main() {
    Child c;
    c.showGrandfather();  // From Grandfather
    c.showFather();       // From Father
    c.showChild();        // From Child

    return 0;
}
