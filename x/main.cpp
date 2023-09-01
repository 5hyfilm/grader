#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, x, y;
    cin >> N >> M;
    vector<int> v;

    for (int i=0; i<N; i++) {
        cin >> x;
        v.push_back(x);
    }

    for (int i=0; i<M; i++) {
        cin >> y;

        if (find(v.begin(), v.end(), y-v[i]) != v.end()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
