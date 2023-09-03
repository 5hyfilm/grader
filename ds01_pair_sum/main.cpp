#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, n, m;
    cin >> N >> M;

    vector<int> v;

    for (int i=0; i<N; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    for (int i=0; i<M; i++)
    {
        cin >> m;
        bool found = false;

        for (auto it=v.begin(); it!=v.end(); it++)
        {
            int tmp = *it;
            v.erase(it);

            if (find(v.begin(), v.end(), m-tmp) != v.end())
            {
                found = true;
                v.insert(it, tmp);
            }
            else
            {
                v.insert(it, tmp);
            }
        }
        if (found == true)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}
