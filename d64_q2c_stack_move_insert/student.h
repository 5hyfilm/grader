#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
    //your code here
    stack<T> s2Temp, temp;

    if (m<=s2.size()) {
        for (int i=0; i<m; i++) {
            s2Temp.push(s2.top());
            s2.pop();
        }
    }

    else {
        while (!s2.empty()) {
            s2Temp.push(s2.top());
            s2.pop();
        }
    }

    for (int j=0; j<k; j++) {
        temp.push(top());
        pop();
    }

    while (!s2Temp.empty()) {
        push(s2Temp.top());
        s2Temp.pop();
    }

    while (!temp.empty()) {
        push(temp.top());
        temp.pop();
    }
}
#endif
