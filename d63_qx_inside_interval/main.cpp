#include <iostream>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, m, a, b, c;
    map<int, int> temp;

    cin >> n >> m;

    for (int i=0; i<n; i++) {
        cin >> a >> b;
        temp[a] = 0;
        if (b != a) {
            temp[b] = 1;
        }
    }

    for (int j=0; j<m; j++) {
        cin >> c;
        if (temp.lower_bound(c) != temp.end()) {
            if (temp.lower_bound(c)->first == c) {
                cout << 1 << " ";
            }
            else if (temp.lower_bound(c)->second == 1) {
                cout << 1 << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        else {
            cout << 0 << " ";
        }
    }
}
