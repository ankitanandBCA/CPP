/*
Class A has a method showA(). Class B : A adds showB(). Class C : B adds showC(). Call all 3 methods from object of C.

*/

#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "This is class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "This is class B" << endl;
    }
};

class C : public B {
public:
    void showC() {
        cout << "This is class C" << endl;
    }
};

int main() {
    C obj;
    obj.showA(); // from A
    obj.showB(); // from B
    obj.showC(); // from C

    return 0;
}
