#include <iostream>
#include <map>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int sum=0, n, m, start, a, s, P, x;
    cin >> n >> m >> start;

    map<int, int> data;
    vector<int> v, vSum;
    v.resize(100000);

    for (int i=0; i<n; i++)
    {
        cin >> a >> s;
        v[a] = s;
    }

    v[0] = start;

    for (int i=0; i<=v.size(); i++)
    {
        if (v[i] == 0)
        {
            v[i] = v[i-1];
            sum+=v[i-1];
            vSum.push_back(sum);
        }
        else
        {
            v[i] = v[i];
            sum+=v[i];
            vSum.push_back(sum);
        }
    }

    for (int i=0; i<m; i++)
    {
        cin >> P >> x;

        bool check = true;

        auto it = lower_bound(vSum.begin(), vSum.end(), P);

        if (it-vSum.begin() <= x)
        {
            cout << it-vSum.begin() << " ";
        }

        else if (it-vSum.begin() > x)
        {
            vector<int> cv = v;
            int newsum = 0;
            vector<int> newvSum;
            newvSum.resize(100000);

            for (int i=0; i<=x; i++)
            {
                cv[i] = 0;
            }

            for (int i=0; i<=cv.size(); i++)
            {
                newsum+=cv[i];
                newvSum[i] = newsum;
            }

            auto it2 = lower_bound(newvSum.begin(), newvSum.end(), P);
            cout << it2-newvSum.begin() << " ";
        }
    }
}
