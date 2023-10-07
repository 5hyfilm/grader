#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T, int> m;
    vector<pair<T, size_t>> ans;



    for (auto &x : k){
        m[x]++;
    }

    return ans;

}

#endif
