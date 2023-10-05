#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
    //write your code here
    std::vector<std::vector<T>> v(k);
    int need = mSize/k;
    int remain = mSize%k;
    int idx = mSize-1;
    int moveIdx = 0;

    for (int i=0; i<k; i++) {
        for (int j=0; j<need; j++) {
            v[i].push_back(mData[idx-moveIdx]);
            moveIdx++;
        }
        if (i<remain) {
            v[i].push_back(mData[idx-moveIdx]);
            moveIdx++;
        }
    }
    return v;
}
#endif
