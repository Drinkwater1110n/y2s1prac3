#include "Truckloads.h"

// 遞迴計算卡車運輸量的範例實作
// 範例邏輯：若物品數量 numItems 小於或等於卡車容量 capacity，則只需一台卡車；
// 否則，遞迴計算剩下的物品所需卡車數量並加一。
int Truckloads::calculateTruckloads(int numItems, int capacity) {
    if (numItems <= capacity)
        return 1;
    return 1 + calculateTruckloads(numItems - capacity, capacity);
}
