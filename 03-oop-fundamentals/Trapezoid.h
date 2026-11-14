#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid {
private:
    double baseA;
    double baseB;
    double height;
    double sideC;
    double sideD;

public:
    Trapezoid(double baseA, double baseB, double height, double sideC, double sideD);

    double area() const;
    double perimeter() const;
    void scale(double factor);
};

#endif // TRAPEZOID_H