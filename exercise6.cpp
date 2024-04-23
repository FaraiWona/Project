#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isalpha(ch) && !inWord) {
            count++;
            inWord = true;
        } else if (!isalpha(ch)) {
            inWord = false;
        }
    }
    return count;
}

string Reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = true;
    for (char& ch : result) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            }
        } else {
            capitalize = true;
        }
    }
    return result;
}

int main() {

    ifstream file("textFile.txt");
    if (!file) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    string fileData((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    file.close();

    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount <<endl;

    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount <<endl;

    cout << "Statement in reverse: " << Reverse(fileData) <<endl;

    cout << "Statement with second letter capitalized: " << capitalizeSecondLetter(fileData) <<endl;

    return 0;
}