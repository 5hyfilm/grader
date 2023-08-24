#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int Q, x, i, j, k;
    string cmd;
    vector<int> v;
    cin >> Q;

    for (int j=0; j<Q; j++) {
        cin >> cmd;
        if (cmd == "pb") {
            cin >> x;
            v.push_back(x);
        }
        else if (cmd == "sa") {
            sort(v.begin(), v.end());
        }
        else if (cmd == "sd") {
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
        }
        else if (cmd == "r") {
            reverse(v.begin(), v.end());
        }
        else if (cmd == "d") {
            cin >> i;
            v.erase(v.begin()+i);
        }
    }

    for (int k=0; k<v.size(); k++) {
        cout << v[k] << " ";
    }
}
