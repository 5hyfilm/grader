#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    int x, y;
    cin >> N >> M;

    vector<int> v;
    for (int i=0; i<N; i++) {
        cin >> x;
        v.push_back(x);
    }

    vector<int> ans;

    for (int j=0; j<M; j++) {
        cin >> y;
        for (int k=0; k<N; k++) {
            if (y == v[k] && find(ans.begin(), ans.end(), v[k]) == ans.end()) {
                ans.push_back(y);
                break;
            }
        }
    }

    sort(ans.begin(), ans.end());
    for (int i=0; i<ans.size();i++) {
        cout << ans[i] << " ";
    }
}
