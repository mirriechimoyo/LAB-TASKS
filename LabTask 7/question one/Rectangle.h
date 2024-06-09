// rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    ~Rectangle();

    void setLength(float len);
    float getLength() const;

    void setWidth(float wid);
    float getWidth() const;

    float calculateArea() const;
};

#endif // RECTANGLE_H
