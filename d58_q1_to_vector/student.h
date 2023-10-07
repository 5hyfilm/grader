#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
    std::vector<T> res;
    //write your code only here
    int currentFront = mFront;
    for (int i=0; i<k; i++) {
        res.push_back(mData[currentFront]);
        currentFront++;
    }
    return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
    mCap = to-from;
    mData = new T[mCap]();
    mSize = to-from;
    mFront = 0;
    for(int i=0; i<mCap; i++) {
        mData[i]=*from;
        from++;
    }
}

#endif
