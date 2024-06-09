#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& text) {
    int count = 0;
    bool inWord = false;
    for (char c : text) {
        if (isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(const string& text) {
    string reversed;
    for (int i = text.length() - 1; i >= 0; i--) {
        reversed.push_back(text[i]);
    }
    return reversed;
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(const std::string& text) {
    std::string result = text;
    bool capitalize = false;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    // Open the text file
    ifstream file("text_file.txt");
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    string fileData;
getline(file, fileData);

    // Close the file
    file.close();
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;
// statement in reverse
    string reversedStatement = reverseString(fileData);
    cout << "Reversed statement: " << reversedStatement << endl;
    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Statement with second letter capitalized: " << capitalizedStatement << endl;

    return 0;
}