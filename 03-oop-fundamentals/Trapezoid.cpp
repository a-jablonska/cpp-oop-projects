#include "Trapezoid.h"

Trapezoid::Trapezoid(double baseA, double baseB, double height, double sideC, double sideD)
    : baseA(baseA), baseB(baseB), height(height), sideC(sideC), sideD(sideD) {}

double Trapezoid::area() const {
    return 0.5 * (baseA + baseB) * height;
}

double Trapezoid::perimeter() const {
    return baseA + baseB + sideC + sideD;
}

void Trapezoid::scale(double factor) {
    if (factor > 0.0) {
        baseA *= factor;
        baseB *= factor;
        height *= factor;
        sideC *= factor;
        sideD *= factor;
    }
}