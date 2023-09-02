#include <iomanip>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    cout << std::fixed << std::setprecision(2);
    int N, score;
    string code, name;
    map<string, pair<int, int> > m1;
    map<string, pair<int, int> > m2;

    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> code >> name >> score;
        m1[code].first += score;
        m1[code].second += 1;
        m2[name].first += score;
        m2[name].second += 1;
    }

    for (auto& x: m1) {
        cout << x.first << " " << ((x.second.first+0.0)/ x.second.second) << "\n";
    }

    for (auto& x: m2) {
        cout << x.first << " " << ((x.second.first+0.0)/ x.second.second) << "\n";
    }
}

