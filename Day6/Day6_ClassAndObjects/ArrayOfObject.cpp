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
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student students[3];  // Array of 3 Student objects
    
    // Input data for each student
    cout << "Enter details for 3 students:\n";
    for(int i = 0; i < 3; i++) {
        cout << "\nEnter details for student " << i+1 << ":\n";
        students[i].setData();
    }
    
    // Display data of all students
    cout << "\n-------- Student Details --------\n";
    for(int i = 0; i < 3; i++) {
        cout << "\nStudent " << i+1 << " Details:";
        students[i].displayData();
    }
    
    return 0;
}