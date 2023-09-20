#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror()
{
    //write your code here
    int newmSize = mSize*2;
    ensureCapacity(newmSize);
    for (int i=0; i<mSize; i++)
    {
        mData[i+mSize] = mData[mSize-1-i];
    }
    mSize = newmSize;
}

#endif
