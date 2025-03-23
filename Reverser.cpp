#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    if (value < 0) return -1; 
    return reverseDigitHelper(value, 0);
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) return "ERROR"; 
    return reverseStringHelper(characters, characters.length() - 1);
}

int Reverser::reverseDigitHelper(int value, int reversed) {
    if (value == 0) return reversed;
    return reverseDigitHelper(value / 10, reversed * 10 + value % 10);
}

std::string Reverser::reverseStringHelper(std::string &characters, int index) {
    if (index < 0) return "";
    return characters[index] + reverseStringHelper(characters, index - 1);
}
