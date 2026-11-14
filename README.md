# OOP Fundamentals in C++

A collection of foundational classes demonstrating encapsulation, input validation, friend functions, and operator overloading.

## Included Classes

* **`BankAccount` (`BankAccount.h` / `BankAccount.cpp`)** — Account balance management with deposit/withdrawal validation and interest calculation.
* **`Circle` (`Circle.h` / `Circle.cpp`)** — Geometric circle class with area and circumference calculations and an overloaded `<<` stream operator.
* **`Trapezoid` (`Trapezoid.h` / `Trapezoid.cpp`)** — Geometric trapezoid supporting area and perimeter calculations as well as uniform dimension scaling.

## How to Compile and Run

```bash
g++ -std=c++17 -O2 *.cpp -o oop_fundamentals
./oop_fundamentals
