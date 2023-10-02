#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T> > data)
{
    //write your code here
    CP::vector<T> temp;
    std::map<int, T> m(data.begin(), data.end());

    for (int i=0; i<mSize; i++)
    {
        if(m.find(i) != m.end())
        {
            temp.push_back(m[i]);
        }
        temp.push_back(mData[i]);
    }

    for (auto &x : m)
    {
        if (x.first >= mSize)
        {
            temp.push_back(x.second);
        }
    }

    *this = temp;
}

#endif

