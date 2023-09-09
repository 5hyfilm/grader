#include <iostream>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int N, M, L, k[50];
    string newPass, oldPass;
    set<string> s;

    cin >> N >> M >> L;

    for (int i=0; i<L; i++)
    {
        cin >> k[i];
        k[i]%=26;
    }

    for (int i=0; i<N; i++)
    {
        cin >> newPass;
        s.insert(newPass);
    }

    for (int i=0; i<M; i++)
    {
        cin >> oldPass;

        for (int j=0; j<L; j++)
        {
            oldPass[j] = (oldPass[j] - 'a' + k[j]) % 26 + 'a';
        }

        if (s.find(oldPass) != s.end())
        {
            cout << "Match" << '\n';
        }
        else
        {
            cout << "Unknown" << '\n';
        }
    }
}
