#include "BankAccount.h"
#include "Circle.h"
#include "Trapezoid.h"
#include <iostream>

int main() {
    BankAccount account("PL00123456789", "Anna Kowalska", 1000.0);
    account.deposit(250.0);
    account.withdraw(400.0);
    account.applyInterest(5.0);
    std::cout << "Account balance (" << account.getOwner() << "): " << account.getBalance() << "\n\n";

    Circle circle(5.0);
    std::cout << circle << "\n\n";

    Trapezoid trap(6.0, 4.0, 3.0, 3.2, 3.2);
    std::cout << "Trapezoid area: " << trap.area() << ", perimeter: " << trap.perimeter() << "\n";
    trap.scale(2.0);
    std::cout << "Scaled trapezoid area: " << trap.area() << "\n";

    return 0;
}