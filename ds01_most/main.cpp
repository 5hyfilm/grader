#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, int> m;

    string w;

    for (int i=0; i<N; i++) {
        cin >> w;
        m[w] += 1;
    }

    string k;
    int v = 0;

    for (auto &x : m) {
        if (x.second >= v) {
            k = x.first;
            v = x.second;
        }
    }

    cout << k << " " << v;
}
