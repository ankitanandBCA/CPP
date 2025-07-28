#include <iostream>
using namespace std;

// Define the Mobile class
class Mobile {
private:
    string brand;
    string model;
    float price;

public:
    // Method to set data
    void setData(string b, string m, float p) {
        brand = b;
        model = m;
        price = p;
    }

    // Method to display data
    void displayData() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Price: ₹" << price << endl;
    }
};

// Main function
int main() {
    // Create multiple objects of Mobile
    Mobile m1, m2, m3;

    // Initialize with different values
    m1.setData("Samsung", "Galaxy S21", 54999);
    m2.setData("Apple", "iPhone 14", 79999);
    m3.setData("OnePlus", "Nord 3", 29999);

    // Display data
    cout << "--- Mobile Details ---\n";
    m1.displayData();
    m2.displayData();
    m3.displayData();

    return 0;
}
