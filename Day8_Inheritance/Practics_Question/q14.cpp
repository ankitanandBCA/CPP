#include<iostream>
using namespace std;

// Base class
class Device {
protected:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }

    void showBrand() {
        cout << "Device Brand: " << brand << endl;
    }
};

// Derived from Device
class Computer : public Device {
public:
    void compute() {
        cout << "Computer is computing." << endl;
    }
};

// Separate base class
class Scanner {
public:
    void scan() {
        cout << "Scanner is scanning documents." << endl;
    }
};

// Derived from Computer and Scanner
class MultifunctionPrinter : public Computer, public Scanner {
public:
    void print() {
        cout << "MultifunctionPrinter is printing." << endl;
    }
};

int main() {
    MultifunctionPrinter mfp;
    mfp.setBrand("HP");
    mfp.showBrand();
    mfp.compute();
    mfp.scan();
    mfp.print();

    return 0;
}
