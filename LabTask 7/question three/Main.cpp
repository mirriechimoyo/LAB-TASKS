#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include "Area.h"

using namespace std;

int main() {
    int choice;
    do {
        cout << "Choose the shape (1 for Triangle, 2 for Circle, 3 for Square, 0 to Quit): ";
        cin >> choice;

        switch(choice) {
            case 1: {
                double base, height;
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            }
            case 2: {
                double radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            }
            case 3: {
                double sideLength;
                cout << "Enter side length of the square: ";
                cin >> sideLength;
                Square square(sideLength);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please choose again." << endl;
        }
    } while (choice != 0);

    return 0;
}
