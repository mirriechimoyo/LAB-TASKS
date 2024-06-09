#include "Square.h"

Square::Square() : sideLength(0) {}

Square::Square(double s) : sideLength(s) {}

double Square::getSideLength() const {
    return sideLength;
}
