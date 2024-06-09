#include "Triangle.h"

Triangle::Triangle() : base(0), height(0) {}

Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::getBase() const {
    return base;
}

double Triangle::getHeight() const {
    return height;
}
