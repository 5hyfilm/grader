#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {

    if (a>b) {
        auto itTemp = a;
        a = b;
        b = itTemp;
    }

    if (a<begin() || b>=end()
            || b<begin() || a>=end()
            || a+m-1<begin() || b+m-1>=end()
            || b+m-1<begin() || a+m-1>=end()
       ) {
        return false;
    }

    if (m <= 0 || m>mSize || a+m-1>=b) {
        return false;
    }

    else {
        while (m--) {
            auto temp = *a;
            *a = *b;
            *b = temp;
            a++;
            b++;
        }
        return true;
    }
}

#endif
