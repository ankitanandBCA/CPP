#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing..." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    cout << "Dog actions:" << endl;
    d.eat();   // Inherited from Animal
    d.bark();  // Own method

    cout << "\nCat actions:" << endl;
    c.eat();   // Inherited from Animal
    c.meow();  // Own method

    return 0;
}
