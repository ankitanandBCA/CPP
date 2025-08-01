#include<iostream>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int empID;

public:
    void setEmployee(string n, int id) {
        name = n;
        empID = id;
    }
};

// Derived from Employee
class Teacher : public Employee {
protected:
    string subject;

public:
    void setSubject(string sub) {
        subject = sub;
    }
};

// Separate base class
class Researcher {
protected:
    string researchArea;

public:
    void setResearchArea(string area) {
        researchArea = area;
    }
};

// Derived from Teacher and Researcher
class ResearchAssistant : public Teacher, public Researcher {
public:
    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Subject: " << subject << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

int main() {
    ResearchAssistant ra;
    ra.setEmployee("Anjali", 2001);
    ra.setSubject("Physics");
    ra.setResearchArea("Quantum Mechanics");
    ra.showDetails();

    return 0;
}
