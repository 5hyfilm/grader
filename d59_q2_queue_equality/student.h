#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
    //write your code here
    //
    if (mSize != other.size()) {
        return false;
    }

    else if (mSize == other.size()) {
        for (int i=0; i<mSize; i++) {
            if (mData[mFront+i] == other.mData[other.mFront+i]) {
            } else {
                return false;
            }
        }
        return true;
    }
    // YOU CANNOT CALL push or pop
}

#endif
