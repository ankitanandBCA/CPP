#include <iostream>
using namespace std;

// Define the BankAccount class
class BankAccount {
private:
    int accountNumber;
    float balance;

public:
    // Method to set account details
    void setAccount(int accNum, float bal) {
        accountNumber = accNum;
        balance = bal;
    }

    // Method to show balance
    void showBalance() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance       : ₹" << balance << endl;
    }
};

// Main function
int main() {
    BankAccount acc;

    int accNum;
    float bal;

    // Input from user
    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter balance: ";
    cin >> bal;

    // Set account details
    acc.setAccount(accNum, bal);

    // Show balance
    cout << "\n--- Account Details ---\n";
    acc.showBalance();

    return 0;
}
