#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m, power, type;
    cin >> n >> m;
    map<int, int> data;
    vector<int> v(50001);

    for (int i=0; i<=5000; i++) {
        v[i] = 1;
    }



    for (int i=0; i<n; i++) {
        cin >> power;
    }
}
