#include <iostream>
using namespace std;

// Inline function to calculate square of a number
inline int square(int x) {
    return x * x;
}

// Inline function to calculate cube of a number
inline int cube(int x) {
    return x * x * x;
}

// Inline function to check if number is even
inline bool isEven(int x) {
    return (x % 2 == 0);
}

// Inline function to find maximum of two numbers
inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num = 5;
    
    // Testing inline functions
    cout << "Number: " << num << endl;
    cout << "Square: " << square(num) << endl;
    cout << "Cube: " << cube(num) << endl;
    cout << "Is Even? " << (isEven(num) ? "Yes" : "No") << endl;
    
    int a = 10, b = 20;
    cout << "Maximum of " << a << " and " << b << " is: " << max(a, b) << endl;

    return 0;
}