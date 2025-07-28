#include <iostream>
using namespace std;

// Define the Person class
class Person {
private:
    string name;
    int age;

public:
    // Method to set data
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display data
    void displayData() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Main function
int main() {
    // Create an object of Person
    Person p1;

    // Set data using setData method
    p1.setData("John Doe", 25);

    // Display data
    p1.displayData();

    return 0;
}
