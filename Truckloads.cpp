#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }
    
    int a = numCrates / 2;
    int b = numCrates - a;

    return numTrucks(a, loadSize) + numTrucks(b, loadSize);
}
