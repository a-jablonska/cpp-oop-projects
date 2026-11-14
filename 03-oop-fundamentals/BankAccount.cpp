#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string& accountNumber, const std::string& owner, double initialBalance)
    : accountNumber(accountNumber), owner(owner), balance(initialBalance >= 0.0 ? initialBalance : 0.0) {}

void BankAccount::deposit(double amount) {
    if (amount > 0.0) {
        balance += amount;
    }
}

bool BankAccount::withdraw(double amount) {
    if (amount <= 0.0 || amount > balance) {
        std::cout << "Withdrawal rejected: invalid amount or insufficient funds.\n";
        return false;
    }
    balance -= amount;
    return true;
}

void BankAccount::applyInterest(double ratePercent) {
    if (ratePercent > 0.0) {
        balance += balance * (ratePercent / 100.0);
    }
}

double BankAccount::getBalance() const {
    return balance;
}

std::string BankAccount::getOwner() const {
    return owner;
}

std::string BankAccount::getAccountNumber() const {
    return accountNumber;
}