#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b) {
    CP::stack<T> temp;
    CP::stack<T> temp2;

    while (b--) {
        temp.push(top());
        pop();
    }
    temp.push(top());
    temp.push(top());
    pop();

    while (!empty()) {
        temp.push(top());
        pop();
    }
    while (!temp.empty()) {
        temp2.push(temp.top());
        temp.pop();
    }
    while (a--) {
        temp.push(temp2.top());
        temp.pop();
    }
    temp2.push(temp2.top());

    while (!temp.empty()) {
        temp2.push(temp.top());
        temp.pop();
    }
    *this = temp2;
}

#endif
