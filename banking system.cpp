#include <iostream>
using namespace std;

class BankAccount {
private:
    string customerName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNumber, double initialBalance) {
        customerName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful! New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful! New balance: $" << balance << endl;
        }
    }

    void checkBalance() const {
        cout << "Account Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 12345, 500.0);  // Create a new account with $500 balance

    account.deposit(200);        // Deposit $200
    account.withdraw(100);       // Withdraw $100
    account.checkBalance();      // Check account balance

    return 0;
}

