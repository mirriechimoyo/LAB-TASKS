#ifndef SQUARE_H
#define SQUARE_H

class Square {
private:
    double sideLength;

public:
    Square();
    Square(double s);
    double getSideLength() const;
};

#endif // SQUARE_H
