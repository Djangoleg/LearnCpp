//
// Created by ok on 28.05.24.
//
#include <iostream>
#include <sstream>

using namespace std;

bool isDigit(string str) {

    if (str.length() == 0)
    {
        return false;
    }

    if (str[0] == '-')
    {
        str = str.substr(1);
    }

    for (char ch : str) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

int countOccurrences(const string& str, const string& target) {
    int count = 0;
    size_t pos = str.find(target);
    while (pos != string::npos) {
        count++;
        pos = str.find(target, pos + 1);
    }
    return count;
}

bool isDoubleDigit(const string& str) {
    // Check if the string has at least two characters
    if (str.length() < 2) {
        return false;
    }

    // Check if the first character is a digit
    if (!isdigit(str[0])) {
        return false;
    }

    // Check if the last character is a digit
    if (!isdigit(str[str.length() - 1])) {
        return false;
    }

    // Extract the substring starting from the second character
    string digits = str.substr(1);

    if (countOccurrences(digits, ".") > 1)
    {
        return false;
    }

    // Check if the remaining characters are all digits
    for (char c : digits) {

        if (c == '.')
        {
            continue;
        }

        if (!isdigit(c)) {
            return false;
        }
    }

    return true;
}

