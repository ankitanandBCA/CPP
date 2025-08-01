/*
✅ 5. Hybrid Inheritance – Practice Questions
Q1.
Class Person, derived Student, another base Athlete. Create SportsStudent from Student and Athlete.

Q2.
Class Device, Computer : Device, Scanner, and MultifunctionPrinter : Computer, Scanner. Add methods to show how hybrid works.

Q3.
Create Employee, derived Teacher, and separate class Researcher. Now create ResearchAssistant : Teacher, Researcher and show full hierarchy.

*/

#include<iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

// Derived from Person
class Student : public Person {
protected:
    int rollNo;

public:
    void setRollNo(int r) {
        rollNo = r;
    }
};

// Another base class
class Athlete {
protected:
    string sport;

public:
    void setSport(string s) {
        sport = s;
    }
};

// Derived from Student and Athlete
class SportsStudent : public Student, public Athlete {
public:
    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Sport: " << sport << endl;
    }
};

int main() {
    SportsStudent s;
    s.setName("Ankit");
    s.setRollNo(101);
    s.setSport("Football");
    s.showDetails();

    return 0;
}
