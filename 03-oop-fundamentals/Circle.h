#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

class Circle {
private:
    double radius;

public:
    explicit Circle(double radius = 1.0);

    double getRadius() const;
    void setRadius(double radius);

    double area() const;
    double circumference() const;

    friend std::ostream& operator<<(std::ostream& out, const Circle& c);
};

#endif // CIRCLE_H