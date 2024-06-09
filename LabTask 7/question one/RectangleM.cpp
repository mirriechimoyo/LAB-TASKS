// main.cpp
#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
    Rectangle rectangle;

    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    rectangle.setLength(length);

    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rectangle.setWidth(width);

    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}