#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m, a, b, c, d;
    cin >> n >> m;

    vector<pair<int, int> > v;
    for (int i=0; i<n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());

    for (int i=0; i<m; i++)
    {
        cin >> c >> d;
        auto it = lower_bound(v.begin(), v.end(), make_pair(c, d));

        if (it->first == c && it->second == d)
        {
            cout << "0 0" << '\n';
        }
        else if (it != v.begin())
        {
            it--;
            cout << it->first << " " << it->second << '\n';
        }
        else
        {
            cout << "-1 -1" << '\n';
        }
    }
}
