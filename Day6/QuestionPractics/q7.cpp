#include <iostream>
using namespace std;

// Define the Employee class
class Employee {
private:
    int id;
    string name;
    float salary;

public:
    // Method to set data
    void setData(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    // Method to get/display data
    void getData() const {
        cout << "Employee ID: " << id << endl;
        cout << "Name       : " << name << endl;
        cout << "Salary     : " << salary << endl;
    }
};

// Main function
int main() {
    Employee emp;

    int id;
    string name;
    float salary;

    // Input from user
    cout << "Enter employee ID: ";
    cin >> id;
    cin.ignore(); // clear newline from buffer
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter salary: ";
    cin >> salary;

    // Set data using object
    emp.setData(id, name, salary);

    // Get/display data using object
    cout << "\n--- Employee Details ---\n";
    emp.getData();

    return 0;
}
