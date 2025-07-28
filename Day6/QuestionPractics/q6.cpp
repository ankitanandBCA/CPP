#include <iostream>
using namespace std;

// Define the Circle class
class Circle {
private:
    float radius;

public:
    // Method to set radius
    void setRadius(float r) {
        radius = r;
    }

    // Method to get radius
    float getRadius() const {
        return radius;
    }

    // Method to calculate and return area
    float getArea() const {
        return 3.14159 * radius * radius;
    }
};

// Main function
int main() {
    Circle c1;

    float r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    // Set radius using object
    c1.setRadius(r);

    // Get and display radius and area
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Area: " << c1.getArea() << endl;

    return 0;
}
