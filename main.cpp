#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"


int main() {
    // 測試 Reverser
    Reverser reverser;
    int number = 12345;
    std::cout << "原始數字: " << number 
              << " 反轉後: " << reverser.reverseDigit(number) << std::endl;

    std::string text = "Hello";
    std::cout << "原始字串: " << text 
              << " 反轉後: " << reverser.reverseString(text) << std::endl;

    // 測試 Truckloads (基本版本)
    Truckloads truckloads;
    int numItems = 120;   // 物品數量
    int capacity = 50;    // 每台卡車容量
    std::cout << "Truckloads (基本版) 需要卡車數量: " 
              << truckloads.calculateTruckloads(numItems, capacity) << std::endl;

    return 0;
}
