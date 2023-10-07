#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::back_to_front() {
    //write your code here
//    queue<T> temp;
//    if (empty()) {
//        // No need for a semicolon here
//    } else if (mSize != 0) {
//        int n = mSize;
//        while (n > 1) {
//            temp.push(front());
//            pop();
//            n--;
//        }
//    }
//
//    while (!temp.empty()) {
//        push(temp.front());
//        temp.pop();
//    }
    if (!empty()) {
        // Calculate the new front index
        int newFront = (mFront + mCap - 1) % mCap;

        // Update the front element to the value at the new front index
        mData[newFront] = mData[(newFront + mSize) % mCap];

        // Update mFront to reflect the new front index
        mFront = newFront;
    }
}

#endif
