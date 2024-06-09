#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double base;
    double height;

public:
    Triangle();
    Triangle(double b, double h);
    double getBase() const;
    double getHeight() const;
};

#endif // TRIANGLE_H
