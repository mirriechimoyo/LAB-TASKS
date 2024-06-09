#include <iostream>
#include <fstream>
using namespace std;
int main() {
    
    ofstream file("text_file.txt");
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    file << "This is the Advanced Computer Programming Module\n";
    file.close();

    cout << "Text file created successfully!" << endl;

    return 0;
}