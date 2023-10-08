#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
    //your code here
    std::vector<T> v;
    for (auto &x : pos) {
        if (x < mSize) {
            v.push_back(mData[(mFront+x+mCap)%mCap]);
        }
    }
    auto ans = std::min_element(v.begin(), v.end(), comp);

    //should return something
    return *ans;
}

#endif
