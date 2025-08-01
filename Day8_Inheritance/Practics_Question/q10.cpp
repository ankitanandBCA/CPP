/*
✅ 4. Hierarchical Inheritance – Practice Questions
Q1.
Base class Account, derived classes SavingAccount and CurrentAccount. Add unique methods in each and use them.

Q2.
Class Vehicle is base, derive Bike, Car, Truck. Create objects of all three and call inherited and their own methods.

Q3.
Class Appliance with brand, then create classes WashingMachine, Refrigerator, Microwave with their features.

*/
#include<iostream>
using namespace std;

// Base class
class Account {
protected:
    int accNumber;
    float balance;

public:
    void setAccount(int number, float bal) {
        accNumber = number;
        balance = bal;
    }

    void showAccount() {
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class 1
class SavingAccount : public Account {
public:
    void addInterest(float rate) {
        float interest = balance * rate / 100;
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }
};

// Derived class 2
class CurrentAccount : public Account {
public:
    void overdraft(float amount) {
        if (amount > balance) {
            cout << "Overdraft allowed. Withdrawn: " << amount << endl;
            balance -= amount;
        } else {
            cout << "Sufficient balance. Withdrawn: " << amount << endl;
            balance -= amount;
        }
    }
};

int main() {
    // Saving Account Example
    SavingAccount s;
    s.setAccount(1001, 5000);
    cout << "\n--- Saving Account ---" << endl;
    s.showAccount();
    s.addInterest(5);
    s.showAccount();

    // Current Account Example
    CurrentAccount c;
    c.setAccount(2001, 3000);
    cout << "\n--- Current Account ---" << endl;
    c.showAccount();
    c.overdraft(4000);  // More than balance
    c.showAccount();

    return 0;
}
