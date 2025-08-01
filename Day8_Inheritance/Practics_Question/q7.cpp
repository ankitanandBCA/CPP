/*

Class Person → Employee → Developer. Add appropriate attributes and display details of Developer using all levels.
*/
#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }
};

class Employee : public Person {
protected:
    int empID;
    float salary;

public:
    void setEmployeeDetails(int id, float s) {
        empID = id;
        salary = s;
    }
};

class Developer : public Employee {
private:
    string language;

public:
    void setDeveloperDetails(string lang) {
        language = lang;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
        cout << "Programming Language: " << language << endl;
    }
};

int main() {
    Developer d;
    d.setPersonDetails("Ankit", 25);
    d.setEmployeeDetails(101, 55000);
    d.setDeveloperDetails("C++");
    d.displayDetails();

    return 0;
}
