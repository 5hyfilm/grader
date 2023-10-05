#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
    //write your code here
    if (K>=mSize) {
        while (!(*this).empty()) {
            (*this).pop();
        }
    } else {
        for (int i=0; i<K; i++) {
            (*this).pop();
        }
    }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    //write your code here
    std::stack<T> temp, topRemove;
    if (K>=mSize) {
        while (!(*this).empty()) {
            temp.push((*this).top());
            (*this).pop();
        }
    } else {
        for (int i=0; i<K; i++) {
            temp.push((*this).top());
            (*this).pop();
        }
    }
    while (!temp.empty()) {
        topRemove.push(temp.top());
        temp.pop();
    }
    //don't forget to return an std::stack
    return topRemove;
}

#endif
