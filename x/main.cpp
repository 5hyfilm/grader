#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    v.push_back(4);
    v.push_back(3);

    for (auto &x : v)
    {
        pq.push(-x);
        //cout << -x << " ";
    }

    for (auto &x : v)
    {
        cout << x << " ";
    }

    cout << endl;
    while (!pq.empty())
    {
        cout << -pq.top() << " ";
        pq.pop();
    }
}
