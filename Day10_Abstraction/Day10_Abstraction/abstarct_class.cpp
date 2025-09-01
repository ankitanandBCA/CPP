#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Concrete function
    void info() {
        cout << "This is a shape." << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    Circle* c=new Circle();
    c->draw();
    c->info();
    return 0;
    // second way
    Circle c1;
    c1.draw();
    c1.info();
    return 0;


}