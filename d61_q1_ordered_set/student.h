#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    for (auto &x : A) {
        v.push_back(x);
    }
    for (auto &x : B) {
        auto it = find(A.begin(), A.end(), x);
        if (it == A.end()) {
            v.push_back(x);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    for (auto &x : A) {
        auto it = find(B.begin(), B.end(), x);
        if (it != B.end()) {
            v.push_back(x);
        }
    }

    return v;
}
