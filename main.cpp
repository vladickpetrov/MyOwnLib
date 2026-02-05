#include <assert.h>
#include "SimpleVector.h"
// #include <iostream>

int main() {
    SimpleVector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    assert(v.size() == 3);
    return 0;
}