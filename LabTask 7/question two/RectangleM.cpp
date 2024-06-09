// main.cpp
#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
    Rectangle rectangle1;

    float length, width;

    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    rectangle1.setLength(length);

    cout << "Enter the width of the first rectangle: ";
    cin >> width;
    rectangle1.setWidth(width);

    cout << "Area of the first rectangle: " << rectangle1.calculateArea() << endl;

    // Creating another instance using overloaded constructor
    cout << "Enter the length of the second rectangle: ";
    cin >> length;

    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    Rectangle rectangle2(length, width);

    cout << "Area of the second rectangle: " << rectangle2.calculateArea() << endl;

    return 0;
}
