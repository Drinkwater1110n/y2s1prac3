#ifndef I_TRUCKLOADS_H
#define I_TRUCKLOADS_H

// 定義計算卡車運輸量的抽象介面
class ITruckloads {
public:
    virtual ~ITruckloads() {}
    // 計算所需卡車數量的遞迴函式
    virtual int calculateTruckloads(int numItems, int capacity) = 0;
};

#endif // I_TRUCKLOADS_H
