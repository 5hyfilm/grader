#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m, card, round=1, num, enemy;
    cin >> n >> m;

    map<int, int> toh;
    for (int i=0; i<n; i++)
    {
        cin >> card;
        toh[card]+=1;
    }

    bool win = true;
    for (int i=0; i<m; i++)
    {
        cin >> num;
        for (int j=0; j<num; j++)
        {
            cin >> enemy;
            auto it = toh.upper_bound(enemy);
            if (it != toh.end())
            {
                it->second-=1;
                if (it->second == 0)
                {
                    toh.erase(it);
                }
            }
            else
            {
                win = false;
            }
        }
        if (win == true){
            round+=1;
        }
    }
    cout << round;
}
