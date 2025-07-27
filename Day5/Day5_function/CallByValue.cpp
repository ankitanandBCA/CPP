#include <iostream>
using namespace std;

// Function using call by value
void swap(int x, int y) {
    cout << "Inside swap function (before swapping):" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    
    int temp = x;
    x = y;
    y = temp;
    
    cout << "Inside swap function (after swapping):" << endl;
    cout << "x = " << x << ", y = " << y << endl;
}

// Function to increment using call by value
void increment(int num) {
    num += 1;
    cout << "Value inside function: " << num << endl;
}

int main() {
    // Test case 1: Swapping
    int a = 10, b = 20;
    cout << "\nOriginal values:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    swap(a, b);  // Call by value
    
    cout << "Values after function call:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    // Test case 2: Increment
    int number = 5;
    cout << "\nOriginal number: " << number << endl;
    
    increment(number);  // Call by value
    
    cout << "Number after function call: " << number << endl;
    
    return 0;
}