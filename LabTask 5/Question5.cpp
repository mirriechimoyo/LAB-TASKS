#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;
int countVowels(const string& str);
int countWords(const string& str);
string reverseString(const string& str);
string capitalizeSecondLetter(const string& str);

int main() {
    ifstream inputFile("text_file.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open the file." << endl;
        return 1;
    }
    string fileData((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());
    // Close the file
    inputFile.close();
    cout << "File Content:\n" << fileData << endl;

    // Calculate and output the number of vowels in the text file statement
    cout << "Number of vowels: " << countVowels(fileData) << endl;

    // Calculate and output the number of words in the text file statement
    cout << "Number of words: " << countWords(fileData) << endl;

    // Output the statement in reverse
    cout << "Reversed statement: " << reverseString(fileData) << endl;

    // Output the statement with the second letter of each word capitalized
    cout << "Statement with capitalized second letters: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}

// Function to count the number of vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count the number of words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = true;
    for (char& ch : result) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
    return result;
}