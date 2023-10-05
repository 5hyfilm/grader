#include "stack.h"
#include "queue.h"

namespace CP {
template<typename T>
void stack<T>::appendStack(stack<T> s) {
    stack<T> temp;
    while (!empty()) {
        temp.push(top());
        pop();
    }
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }
    *this = s;
}

template<typename T>
void stack<T>::appendQueue(queue<T> q) {
    stack<T> temp;
    stack<T> rTemp;
    stack<T> sTemp;
    while (!q.empty()) {
        temp.push(q.front());
        q.pop();
    }
    while (!temp.empty()) {
        rTemp.push(temp.top());
        temp.pop();
    }
    while (!empty()) {
        sTemp.push(top());
        pop();
    }
    while (!sTemp.empty()) {
        rTemp.push(sTemp.top());
        sTemp.pop();
    }
    *this = rTemp;
}

template<typename T>
void queue<T>::appendStack(stack<T> s) {
    while (!s.empty()) {
        (*this).push(s.top());
        s.pop();
    }
}

template<typename T>
void queue<T>::appendQueue(queue<T> q) {
    while (!q.empty()) {
        (*this).push(q.front());
        q.pop();
    }
}
}
