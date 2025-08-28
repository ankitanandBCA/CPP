#include <iostream>
using namespace std;

class Overloading {
public:
    int add(int a, int b)  
    {
        return a + b;
    }

    int add(int a, int b, int c)   
    {
        return a + b + c;
    }
};

int main() {
    Overloading obj;

    cout << "Sum of 2 numbers: " << obj.add(10, 20) << endl;
    cout << "Sum of 3 numbers: " << obj.add(10, 20, 30) << endl;

    return 0;
}
