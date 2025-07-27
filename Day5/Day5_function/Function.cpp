#include <iostream>
#include<string>
using namespace std;

// 1. Calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// 2. Check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// 3. Fibonacci series generator
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 4. Reverse a string
string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - 1 - i]);
    }
    return str;
}

// 5. Calculate power of a number
double power(double base, int exp) {
    if (exp == 0) return 1;
    if (exp < 0) return 1 / power(base, -exp);
    return base * power(base, exp - 1);
}

// 6. Check if a number is palindrome
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

// 7. Find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}



// 8. Sum of array elements
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// 9. Check if a string is anagram
bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    int count[26] = {0};
    for (int i = 0; i < s1.length(); i++) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main() {
    // Test all functions
    cout << "1. Factorial of 5: " << factorial(5) << endl;
    cout << "2. Is 17 prime? " << (isPrime(17) ? "Yes" : "No") << endl;
    cout << "3. 8th Fibonacci number: " << fibonacci(8) << endl;
    cout << "4. Reverse of 'Hello': " << reverseString("Hello") << endl;
    cout << "5. 2^3: " << power(2, 3) << endl;
    cout << "6. Is 121 palindrome? " << (isPalindrome(121) ? "Yes" : "No") << endl;
    cout << "7. GCD of 48 and 36: " << gcd(48, 36) << endl;
  
    int arr[] = {1, 2, 3, 4, 5};
    cout << "9. Sum of array: " << arraySum(arr, 5) << endl;
    cout << "10. Are 'silent' and 'listen' anagrams? " 
         << (isAnagram("silent", "listen") ? "Yes" : "No") << endl;
    
    return 0;
}