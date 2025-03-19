#include "Reverser.h"

// 利用輔助遞迴函式反轉數字
int Reverser::reverseDigit(int value) {
    if (value < 0)
        return -1;  // 錯誤輸入
    if (value < 10)
        return value;  // 基本情況：單一位數直接返回

    // 輔助遞迴 lambda 函式（尾遞迴方式）
    auto helper = [](auto self, int v, int res) -> int {
        if (v == 0)
            return res;
        return self(self, v / 10, res * 10 + (v % 10));
    };
    return helper(helper, value, 0);
}

// 利用遞迴反轉字串
std::string Reverser::reverseString(const std::string &characters) {
    // 錯誤處理依題目定義可做調整，這裡假設空字串視為有效
    if (characters.empty())
        return "";
    if (characters.size() == 1)
        return characters;
    return reverseString(characters.substr(1)) + characters[0];
}
