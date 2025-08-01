#include<iostream>
using namespace std;

// Base class
class Shape {
protected:
    int length;
    int breath;

public:
    Shape(int length, int breath) {
        this->length = length;
        this->breath = breath;
    }

    virtual void area() {
        cout << "Shape area" << endl;
    }
};

// Derived class
class Square : public Shape {
public:
    Square(int length, int breath) : Shape(length, breath) {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breath << endl;
    }

    void area() override {
        int area = length * breath;
        cout << "Square Area = " << area << endl;
    }
};

int main() {
    Square s(5, 5);
    s.area();

    return 0;
}
