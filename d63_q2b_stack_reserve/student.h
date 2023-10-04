#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int thisSpace = mCap - mSize;
    int otherSpace = other.mCap - other.mSize;

    if (thisSpace < otherSpace) {
        return -1;
    }
    else if (thisSpace == otherSpace) {
        return 0;
    }
    else if (thisSpace > otherSpace) {
        return 1;
    }
}

#endif
