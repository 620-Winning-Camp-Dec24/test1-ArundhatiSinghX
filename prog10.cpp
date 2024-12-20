#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string accountHolder;
    double balance;

public:
    Account(string name, double initialBalance) {
        accountHolder = name;   
        balance = initialBalance;
    }

    virtual void calculateInterest() = 0;

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }

    double getBalance() const {
        return balance;
    }

    void setBalance(double newBalance) {
        balance = newBalance;
    }

    string getAccountHolder() const {
        return accountHolder;
    }

};

class SavingsAccount : public Account {
private:
    double rate;
    int time;

public:
    SavingsAccount(string name, double initialBalance, double interestRate, int years)
        : Account(name, initialBalance) {
        rate = interestRate; 
        time = years;
    }

    void calculateInterest() override {
        double interest = getBalance() * rate * time;
        setBalance(getBalance() + interest);
        cout << "Interest of $" << interest << " added to Savings Account." << endl;
    }
};

class CurrentAccount : public Account {
private:
    double maintenanceFee;

public:

    CurrentAccount(string name, double initialBalance, double fee)
        : Account(name, initialBalance) {
        maintenanceFee = fee;
    }

    void calculateInterest() override {
        setBalance(getBalance() - maintenanceFee);
        cout << "Maintenance fee of $" << maintenanceFee << " deducted from Current Account." << endl;
    }
};

int main() {
    string name, accountType;
    double initialBalance;

    cout << "Enter account holder's name: ";
    getline(cin, name);

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    cout << "Enter account type (Savings/Current): ";
    cin >> accountType;

    if (accountType == "Savings") {
        double rate;
        int time;

        cout << "Enter interest rate (as a decimal, e.g., 0.03 for 3%): ";
        cin >> rate;

        cout << "Enter time in years: ";
        cin >> time;

        SavingsAccount savings(name, initialBalance, rate, time);

        savings.displayBalance();
        savings.calculateInterest();
        savings.displayBalance();
    } 
    else if (accountType == "Current") {
        double maintenanceFee;

        cout << "Enter maintenance fee: ";
        cin >> maintenanceFee;

        CurrentAccount current(name, initialBalance, maintenanceFee);

        current.displayBalance();
        current.calculateInterest();
        current.displayBalance();
    } 
    else {
        cout << "Invalid account type entered. Please enter either 'Savings' or 'Current'." << endl;
    }

    return 0;
}
