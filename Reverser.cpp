#include "Reverser.h"

int Reverser::reverseDigit(int number) {
    if (number < 0)
        return -1;
    
    return reverseDigitHelper(number, 0);
}

std::string Reverser::reverseString(const std::string& str) {
    if (str.empty())
        return "ERROR";
    
    return reverseStringHelper(str, static_cast<int>(str.size()) - 1);
}

int Reverser::reverseDigitHelper(int remaining, int result) {
    if (remaining == 0)
        return result;
    
    int lastDigit = remaining % 10;
    int nextRemaining = remaining / 10;
    int nextResult = result * 10 + lastDigit;

    return reverseDigitHelper(nextRemaining, nextResult);
}

std::string Reverser::reverseStringHelper(const std::string& str, int idx) {
    if (idx < 0)
        return "";

    char currentChar = str[idx];
    return std::string(1, currentChar) + reverseStringHelper(str, idx - 1);
}
