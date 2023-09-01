#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    string name;

    map<string, int> m;
    for (int i=0; i<N; i++) {
        cin >> name;
        m[name] += 1;
    }

    vector<int> v;
    for (auto &x : m) {
        v.push_back(x.second);
    }

    sort(v.begin(), v.end());

    if (v.size()<K) {
        cout << v[0];
    }
    else {
        cout << v[v.size()-K];
    }
}
