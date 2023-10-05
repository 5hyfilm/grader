#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
    //write your code ONLY here

    int sSize = 0;
    for (auto it=first; it!=last; it++) {
        sSize++;
    }

    mSize = sSize;
    mCap = mSize;
    mData = new T[mCap]();

    int n = sSize-1;
    for (auto it=first; it!=last; it++) {
        mData[n--] = *it;
    }
}

#endif


