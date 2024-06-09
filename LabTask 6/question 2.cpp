#include <iostream>
using namespace std;

int main() {
    // Declare variables 
    int rows, cols;

   
    do {
        cout << "Enter the number of rows (maximum 3): ";
        cin >> rows;
        if (rows <= 0 || rows > 3) {
            cout << "Invalid input. Please enter a value between 1 and 3.\n";
        }
    } while (rows <= 0 || rows > 3);

    do {
        cout << "Enter the number of columns (maximum 3): ";
        cin >> cols;
        if (cols <= 0 || cols > 3) {
            cout << "Invalid input. Please enter a value between 1 and 3.\n";
        }
    } while (cols <= 0 || cols > 3);

    // Dynamically allocate memory 
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

   
    cout << "Enter the values for each element of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output the values 
    cout << "Values of each element of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory to prevent memory leaks
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}