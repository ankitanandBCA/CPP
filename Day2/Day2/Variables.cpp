#include <iostream>
using namespace std;

int main() {
    // 1. Integer Types (Whole Numbers)
    int age = 25;                    // Regular integer
    short smallNum = 32767;          // Small integer
    long bigNum = 2147483647;        // Large integer
   
    // 2. Floating Point Types (Decimal Numbers)
    float price = 99.99f;            // Single precision decimal
    double pi = 3.14159265359;       // Double precision decimal
    long double bigDecimal = 3.14L;  // Extended precision decimal

    // 3. Character Types
    char grade = 'A';                // Single character
    wchar_t wideChar = L'श';         // Wide character

    // 4. Boolean Type
    bool isActive = true;            // Can be true or false only

    // 5. String Type (Text)
    char name[10] = "Rahul";           // Text string

    // Printing all variables
    cout << "=== Demonstrating Different Variable Types ===" << endl;
    cout << "Integer: " << age << endl;
    cout << "Short Integer: " << smallNum << endl;
    cout << "Long Integer: " << bigNum << endl;
   
    cout << "Float: " << price << endl;
    cout << "Double: " << pi << endl;
    cout << "Long Double: " << bigDecimal << endl;
    cout << "Character: " << grade << endl;
    cout << "Wide Character: " << wideChar << endl;
    cout << "Boolean: " << isActive << endl;
    cout << "String: " << name << endl;

    // 6. Constants (Cannot be changed)
    const int DAYS_IN_WEEK = 7;      // Constant variable
    cout << "Constant: " << DAYS_IN_WEEK << endl;

    return 0;
}