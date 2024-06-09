#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
void calculateTriangleArea();
void calculateRectangleArea();
void calculateSquareArea();

int main() {
    char selection;

    // Loop until the user chooses to quit
    while (true) {
        // Display menu options
        cout << "Select a shape to calculate the area:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit program" << endl;
        cout << "Enter your selection: ";
        cin >> selection;

        // Process user's choice
        if (selection == '1') {
            calculateSquareArea();
        } else if (selection == '2') {
            calculateRectangleArea();
        } else if (selection == '3') {
            calculateTriangleArea();
        } else if (selection == '4') {
            cout << "Exiting program." << endl;
            break;
        } else {
            cout << "Invalid input! Please enter a valid choice." << endl;
        }
    }

    return 0;
}

// Function to calculate the area of a triangle
void calculateTriangleArea() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;
}
//area of a rectangle
void calculateRectangleArea() {
    double length, width;
cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    double area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
}
 //the area of a square
void calculateSquareArea() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    double area = side * side;
    cout << "The area of the square is: " << area << endl;
}