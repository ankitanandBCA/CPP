#include <iostream>
using namespace std;

// First base class
class Father {
public:
    void showFather() {
        cout << "I am the Father." << endl;
    }
};

// Second base class
class Mother {
public:
    void showMother() {
        cout << "I am the Mother." << endl;
    }
};

// Derived class inheriting from both Father and Mother
class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "I am the Child." << endl;
    }
};

int main() {
    Child c;
    c.showFather();  // Function from Father
    c.showMother();  // Function from Mother
    c.showChild();   // Function from Child

    return 0;
}
