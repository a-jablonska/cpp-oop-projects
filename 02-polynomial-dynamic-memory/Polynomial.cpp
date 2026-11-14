#include "Polynomial.h"

Polynomial::Polynomial(int degree) : degree(degree >= 0 ? degree : 0) {
    coefficients = new double[this->degree + 1];
    for (int i = 0; i <= this->degree; ++i) {
        coefficients[i] = 0.0;
    }
}

Polynomial::Polynomial(int degree, const double* coeffs) : degree(degree >= 0 ? degree : 0) {
    coefficients = new double[this->degree + 1];
    for (int i = 0; i <= this->degree; ++i) {
        coefficients[i] = (coeffs != nullptr) ? coeffs[i] : 0.0;
    }
}

Polynomial::Polynomial(const Polynomial& other) : degree(other.degree) {
    coefficients = new double[degree + 1];
    for (int i = 0; i <= degree; ++i) {
        coefficients[i] = other.coefficients[i];
    }
}

Polynomial& Polynomial::operator=(const Polynomial& other) {
    if (this == &other) {
        return *this;
    }

    delete[] coefficients;
    degree = other.degree;
    coefficients = new double[degree + 1];
    for (int i = 0; i <= degree; ++i) {
        coefficients[i] = other.coefficients[i];
    }

    return *this;
}

Polynomial::~Polynomial() {
    delete[] coefficients;
}

int Polynomial::getDegree() const {
    return degree;
}

double Polynomial::getCoefficient(int index) const {
    if (index < 0 || index > degree) {
        return 0.0;
    }
    return coefficients[index];
}

void Polynomial::setCoefficient(int index, double value) {
    if (index >= 0 && index <= degree) {
        coefficients[index] = value;
    }
}

// Evaluates P(x) using Horner's method in O(n) time
double Polynomial::evaluate(double x) const {
    double result = coefficients[degree];
    for (int i = degree - 1; i >= 0; --i) {
        result = result * x + coefficients[i];
    }
    return result;
}

std::ostream& operator<<(std::ostream& out, const Polynomial& p) {
    for (int i = p.degree; i >= 0; --i) {
        out << p.coefficients[i];
        if (i > 0) {
            out << "x^" << i << " + ";
        }
    }
    return out;
}