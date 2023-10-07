#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T, size_t> m;
    std::vector<std::pair<T, size_t>> v;

    for (int i=0; i<mSize; i++) {
        m[mData[(i+mFront)%mCap]]++;
    }

    for (auto &x : k){
        v.push_back(std::make_pair(x, m[x]));
    }

    return v;
}

#endif
