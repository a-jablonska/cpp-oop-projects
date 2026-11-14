#include "Circle.h"

namespace {
    constexpr double PI = 3.14159265358979323846;
}

Circle::Circle(double radius) : radius(radius > 0.0 ? radius : 1.0) {}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    if (radius > 0.0) {
        this->radius = radius;
    }
}

double Circle::area() const {
    return PI * radius * radius;
}

double Circle::circumference() const {
    return 2.0 * PI * radius;
}

std::ostream& operator<<(std::ostream& out, const Circle& c) {
    out << "Circle(radius = " << c.radius
        << ", area = " << c.area()
        << ", circumference = " << c.circumference() << ")";
    return out;
}