#include <iostream>
using namespace std;

// Define the Laptop class
class Laptop {
private:
    string brand;
    string model;
    float price;

public:
    // Method to take input from user
    void inputData() {
        cout << "Enter laptop brand: ";
        getline(cin, brand);
        cout << "Enter laptop model: ";
        getline(cin, model);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore(); // clear input buffer
    }

    // Method to display laptop details
    void displayData() const {
        cout << "\n--- Laptop Details ---" << endl;
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Price : ₹" << price << endl;
    }
};

// Main function
int main() {
    Laptop l1;

    // Take input from user
    l1.inputData();

    // Display laptop details
    l1.displayData();

    return 0;
}
