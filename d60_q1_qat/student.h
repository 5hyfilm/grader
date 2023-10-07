#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
    //write something here
    if (idx < 0) {
        idx = mSize+idx;
    }
    //
    // you need to return something
    return mData[(idx+mFront)%mCap];
}

#endif
