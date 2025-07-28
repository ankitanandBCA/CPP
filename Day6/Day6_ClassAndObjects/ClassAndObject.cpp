#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Constructor
    Student() {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }

    // Member functions
    void setData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;    // Creating object of Student class
    
    cout << "Enter student information:" << endl;
    s1.setData();  // Setting data for student
    
    s1.displayData();  // Displaying student information
    
    return 0;
}