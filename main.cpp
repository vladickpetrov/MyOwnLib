#include <assert.h>
#include "SimpleVector.h"
// #include <iostream>

int main() {
    SimpleVector<int> v;
    v.push_back(10);
    v.push_back(20);

    assert(v.size() == 1);
}