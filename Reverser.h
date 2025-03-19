#ifndef REVERSER_H
#define REVERSER_H

#include <string>

// 定義反轉功能的抽象介面，方便未來擴充（依照 DIP 與 ISP）
class IReverser {
public:
    virtual ~IReverser() {}
    // 反轉非負整數數字，若輸入錯誤（如負數）則回傳 -1
    virtual int reverseDigit(int value) = 0;
    // 反轉字串，若輸入錯誤則回傳 "ERROR"
    virtual std::string reverseString(const std::string &characters) = 0;
};

// 實作 IReverser 的 Reverser 類別（符合 SRP：只處理反轉功能）
class Reverser : public IReverser {
public:
    int reverseDigit(int value) override;
    std::string reverseString(const std::string &characters) override;
};

#endif // REVERSER_H
