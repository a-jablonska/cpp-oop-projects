#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string owner;
    double balance;

public:
    BankAccount(const std::string& accountNumber, const std::string& owner, double initialBalance);

    void deposit(double amount);
    bool withdraw(double amount);
    void applyInterest(double ratePercent);

    double getBalance() const;
    std::string getOwner() const;
    std::string getAccountNumber() const;
};

#endif // BANK_ACCOUNT_H