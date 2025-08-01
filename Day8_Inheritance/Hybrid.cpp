#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void showPerson() {
        cout << "I am a Person." << endl;
    }
};

// First derived class (Single Inheritance from Person)
class Student : public Person {
public:
    void showStudent() {
        cout << "I am a Student." << endl;
    }
};

// Second base class
class Teacher {
public:
    void showTeacher() {
        cout << "I am a Teacher." << endl;
    }
};

// Hybrid class (Multiple Inheritance: from Student and Teacher)
class TeachingAssistant : public Student, public Teacher {
public:
    void showTA() {
        cout << "I am a Teaching Assistant." << endl;
    }
};

int main() {
    TeachingAssistant ta;

    ta.showPerson();   // From Person via Student
    ta.showStudent();  // From Student
    ta.showTeacher();  // From Teacher
    ta.showTA();       // Own method

    return 0;
}
