#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }

    const int halfA = numCrates / 2;
    const int halfB = numCrates - halfA;

    return numTrucks(halfA, loadSize) + numTrucks(halfB, loadSize);
}
