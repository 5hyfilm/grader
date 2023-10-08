#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
    //your code here
    std::vector<std::vector<T>> v(k);
    for (int i=0; i<mSize; i++) {
        v[i%k].insert(v[i%k].begin(), mData[mSize-1-i]);
    }
    //should return something
    return v;
}

#endif

