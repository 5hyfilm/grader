#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
    //write your code here
    stack<T> temp;
    for (int i=0; i<pos; i++) {
        temp.push((*this).top());
        (*this).pop();
    }
    temp.push(value);

    while (!(*this).empty()) {
        temp.push((*this).top());
        (*this).pop();
    }

    while (!temp.empty()) {
        (*this).push(temp.top());
        temp.pop();
    }
}

#endif
