#include <iostream>
using namespace std;

// 1. Print numbers from 1 to 10
void q1() {
    for(int i=1; i<=10; i++)
        cout << i << " ";
    cout << endl;
}

// 2. Print even numbers from 1 to 20
void q2() {
    for(int i=2; i<=20; i+=2)
        cout << i << " ";
    cout << endl;
}

// 3. Print sum of first 10 natural numbers
void q3() {
    int sum = 0;
    for(int i=1; i<=10; i++)
        sum += i;
    cout << "Sum: " << sum << endl;
}

// 4. Print multiplication table of 5
void q4() {
    for(int i=1; i<=10; i++)
        cout << "5 x " << i << " = " << 5*i << endl;
}

// 5. Print factorial of 5
void q5() {
    int fact = 1;
    for(int i=1; i<=5; i++)
        fact *= i;
    cout << "Factorial: " << fact << endl;
}

// 6. Print numbers from 10 to 1
void q6() {
    for(int i=10; i>=1; i--)
        cout << i << " ";
    cout << endl;
}

// 7. Print all odd numbers between 1 and 20
void q7() {
    for(int i=1; i<=20; i+=2)
        cout << i << " ";
    cout << endl;
}

// 8. Print squares of numbers from 1 to 10
void q8() {
    for(int i=1; i<=10; i++)
        cout << i*i << " ";
    cout << endl;
}

// 9. Print sum of even numbers from 1 to 10
void q9() {
    int sum = 0;
    for(int i=2; i<=10; i+=2)
        sum += i;
    cout << "Sum of even: " << sum << endl;
}

// 10. Print reverse of a number (e.g., 1234)
void q10() {
    int n = 1234, rev = 0;
    while(n > 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    cout << "Reverse: " << rev << endl;
}

int main() {
    q1();
    q2();
    q3();
    q4();
    q5();
    q6();
    q7();
    q8();
    q9();
    q10();