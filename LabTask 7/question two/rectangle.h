// rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    Rectangle(float len, float wid);
    ~Rectangle();

    void setLength(float len);
    float getLength() const;

    void setWidth(float wid);
    float getWidth() const;

    float calculateArea() const;
};

#endif // RECTANGLE_H