#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N;
    string word;
    map<string, int> m;

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> word;
        m[word] += 1;
    }

    for (auto &x : m) {
        if (x.second > 1) {
            cout << x.first << " " << x.second << endl;
        }
    }
}
