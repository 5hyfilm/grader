#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, m, k, x, y;
    cin >> n >> m >> k;

    vector<int> v;

    for (int a=0; a<n; a++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int b=0; b<m; b++) {
        cin >> y;
        auto low = lower_bound(v.begin(), v.end(),y-k);
        auto up = upper_bound(v.begin(), v.end(),y+k);
        cout << up - low << " ";
    }
}
