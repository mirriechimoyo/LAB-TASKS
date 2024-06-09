#include <iostream>
#include <string>

int main() {
    // Declaration of the array 
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
//checking if element start with 'B'
    for (const string& element : elements) {
        if (element[0] == 'B') {
            // Output the element to the console
            cout << element << endl;
        }
    }

    return 0;
}