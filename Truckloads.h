#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include "ITruckloads.h"

// Truckloads 類別只負責以遞迴計算卡車運輸量（符合 SRP）
class Truckloads : public ITruckloads {
public:
    int calculateTruckloads(int numItems, int capacity) override;
};

#endif // TRUCKLOADS_H
