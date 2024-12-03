#include <cctype>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::ifstream ifs("sample-input.txt");

    std::vector<std::string> matches;

    std::string currentString;
    char currentChar;
    while (ifs >> currentChar) {
        if (currentString.empty()) {
            if (currentChar == 'm') {
                currentString += currentChar;
            } else {
                currentString = "";
            }
        } else if (currentString == "m") {
            if (currentChar == 'u') {
                currentString += currentChar;
            } else {
                currentString = "";
            }
        } else if (currentString == "mu") {
            if (currentChar == 'l') {
                currentString += currentChar;
            } else {
                currentString = "";
            }
        } else if (currentString == "mul") {
            if (currentChar == '(') {
                currentString += currentChar;
            } else {
                currentString = "";
            }
        } else if (currentString == "mul(") {
            if (std::isdigit(currentChar)) {
                currentString += currentChar;
                while (ifs >> currentChar && std::isdigit(currentChar)) {
                    currentString += currentChar;
                }
                if ()
            } else {
                currentString = "";
            }
        }
    }

    ifs.close();

    return 0;
}
