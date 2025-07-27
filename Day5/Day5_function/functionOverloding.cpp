#include <iostream>
#include <string>  // Added this header for string operations
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to concatenate two strings
string add(string a, string b) {
    return a + b;
}

// Function to add an integer and a double
double add(int a, double b) {
    return a + b;
}

int main() {
    // Testing different overloaded functions
    cout << "Adding two integers: " << add(5, 3) << endl;
    cout << "Adding three integers: " << add(5, 3, 2) << endl;
    cout << "Adding two doubles: " << add(3.5, 2.7) << endl;
    cout << "Concatenating strings: " << add("Hello ", "World!") << endl;
    cout << "Adding integer and double: " << add(5, 3.7) << endl;

    return 0;
}