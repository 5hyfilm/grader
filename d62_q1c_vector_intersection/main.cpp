#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, x;
    cin >> N >> M;

    map<int, int> m;

    for (int i=0; i<N; i++) {
        cin >> x;
        m[x] = 1;
    }

    set<int> s;
    for (int i=0; i<M; i++) {
        cin >> x;
        if (m[x] == 1) {
            s.insert(x);
        }
    }

    for (int num: s) {
        cout << num << " ";
    }
}
