/*
Create class Animal, derive Bird, then derive Parrot. Add behavior at each level and show how Parrot gets all.

*/

#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal can eat." << endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "Bird can fly." << endl;
    }
};

class Parrot : public Bird {
public:
    void speak() {
        cout << "Parrot can speak." << endl;
    }
};

int main() {
    Parrot p;
    p.eat();    // from Animal
    p.fly();    // from Bird
    p.speak();  // from Parrot

    return 0;
}
