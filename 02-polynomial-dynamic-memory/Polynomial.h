#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>

class Polynomial {
private:
    int degree;
    double* coefficients;

public:
    explicit Polynomial(int degree = 0);
    Polynomial(int degree, const double* coeffs);
    Polynomial(const Polynomial& other);
    Polynomial& operator=(const Polynomial& other);
    ~Polynomial();

    int getDegree() const;
    double getCoefficient(int index) const;
    void setCoefficient(int index, double value);

    double evaluate(double x) const;

    friend std::ostream& operator<<(std::ostream& out, const Polynomial& p);
};

#endif // POLYNOMIAL_H