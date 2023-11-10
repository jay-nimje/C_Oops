
#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    long accountNumber;
    std::string accountType;
    double balance;

public:

    BankAccount(const std::string& name, long accNumber, const std::string& accType, double initialBalance)
        : depositorName(name), accountNumber(accNumber), accountType(accType), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
            } else {
                std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
            }
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }

    void display() {
        std::cout << "Account Holder Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {

    BankAccount account("John Doe", 1234567890, "Savings", 1000.0);
    
    account.display(); 
    
    account.deposit(500.0); 
    account.withdraw(200.0); 
    account.display();
    
    return 0;
}

