#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, sum=0, goal, op, a, b;

    cin >> n >> m;

    queue<int> qPrathong, qDotman;
    vector<int> p, counter;

    for (int i=0; i<m; i++)
    {
        cin >> goal;
        p.push_back(goal);
    }

    for (int i=0; i<n; i++)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> a >> b;
            if (a == 1)
            {
                qPrathong.push(b);
            }
            else if (a == 2)
                qDotman.push(b);
        }
        else
        {
            if (op == 2)
            {
                if (!qPrathong.empty() && !qDotman.empty())
                {
                    if (qPrathong.front() <= qDotman.front())
                    {
                        sum+=qPrathong.front();
                        qPrathong.pop();
                    }
                    else if (qPrathong.front() > qDotman.front())
                    {
                        sum+=qDotman.front();
                        qDotman.pop();
                    }
                    counter.push_back(sum);
                }
                else if (qPrathong.empty() && !qDotman.empty())
                {
                    sum+=qDotman.front();
                    qDotman.pop();
                    counter.push_back(sum);
                }
                else if (!qPrathong.empty() && qDotman.empty())
                {
                    sum+=qPrathong.front();
                    qPrathong.pop();
                    counter.push_back(sum);
                }
            }
        }
    }

    for (int i=0; i<p.size(); i++)
    {
        auto it = lower_bound(counter.begin(), counter.end(), p[i]);
        if (it == counter.end())
        {
            cout << -1 << " ";
        }
        else
        {
            cout << it-counter.begin() + 1 << " "; // +1 เพราะตอนเริ่มต้องมีขั้นต่ำ 1 ตัว
        }
    }
}
