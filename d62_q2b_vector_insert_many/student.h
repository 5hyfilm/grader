#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T> > data)
{
    //write your code here
    ensureCapacity(mSize+data.size());
    T *temp = new T[mCap]();
    std::map<int, int> m(data.begin(), data.end());

    for (int i=0; i<mSize; i++) {
        if(m.find(i) != m.end()){
            temp.push_back(m[i]);
        }
        else {
            temp.push_back(mData[i]);
        }
    }

    delete[] mData;
    mData = temp;

}

#endif
