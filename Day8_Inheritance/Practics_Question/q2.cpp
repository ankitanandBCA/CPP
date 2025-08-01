#include<iostream>
#include<string>
using namespace std;

class Employee {
protected:
    string name;
    float salary;

public:
    Employee(string name, float salary) {
        this->name = name;
        this->salary = salary;
    }
};

class Manager : public Employee {
private:
    string dept;

public:
    Manager(string name, float salary, string dept) : Employee(name, salary) {
        this->dept = dept;
    }

    void Display() {
        cout << "name = " << name << ", salary = " << salary << ", dept = " << dept << endl;
    }
};

int main() {
    Manager m("Ankit Anand", 45000.50, "Java Developer");
    m.Display();

    return 0;
}
