#include "Polynomial.h"

int main() {
    // Represents P(x) = 3x^2 + 2x + 1
    double coeffs[] = {1.0, 2.0, 3.0};
    Polynomial p(2, coeffs);

    std::cout << "P(x) = " << p << "\n";
    std::cout << "P(2) = " << p.evaluate(2.0) << "\n";

    // Test deep copy
    Polynomial copy = p;
    copy.setCoefficient(2, 10.0);
    std::cout << "Original P(x) = " << p << "\n";
    std::cout << "Modified copy = " << copy << "\n";

    return 0;
}