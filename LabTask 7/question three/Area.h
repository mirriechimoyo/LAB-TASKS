#ifndef AREA_H
#define AREA_H

class Triangle;
class Circle;
class Square;

class Area {
public:
    static double calculateTriangleArea(const Triangle& triangle);
    static double calculateCircleArea(const Circle& circle);
    static double calculateSquareArea(const Square& square);
};

#endif // AREA_H
