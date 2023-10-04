#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  if (mSize == 0 || k%mSize == 0){
    return ;
  }

  size K = k%mSize;
  std::rotate(first, )
}

#endif
