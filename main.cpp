// main.cpp
#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"

int main() {
    Reverser r;
    Truckloads t;

    std::cout << "Reverse digit of 1234: " << r.reverseDigit(1234) << std::endl;
    std::cout << "Reverse string of 'hello': " << r.reverseString("hello") << std::endl;
    std::cout << "Number of trucks for 14 crates, load size 3: " << t.numTrucks(14, 3) << std::endl;

    return 0;
}
