#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream file("data.csv");   // File pointer
    string line;                 // To hold each line from file

    // Check if file opened successfully
    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Read file one line at a time
    while (getline(file, line)) {

        stringstream ss(line);   // Stringstream for the line
        string temp;             // Temporary string for parsing
        int num1, num2;
        string word;

        // Read first number
        getline(ss, temp, ',');
        stringstream(temp) >> num1;

        // Read second number
        getline(ss, temp, ',');
        stringstream(temp) >> num2;

        // Read string text
        getline(ss, word);

        // Remove leading space from word if present
        if (!word.empty() && word[0] == ' ')
            word.erase(0, 1);

        int sum = num1 + num2;

        // Print the word "sum" times
        for (int i = 0; i < sum; i++) {
            cout << word << "  ";
        }
        cout << endl;
    }

    file.close();
    return 0;
}

