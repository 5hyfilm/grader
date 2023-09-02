#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    int N, M;
    cin >> N >> M;

    long long F, S, A, B;

    map<long, long> m;
    for (int i=0; i<N; i++) {
        cin >> F >> S;
        m[S] = F;
    }

    for (int i=0; i<M; i++) {
        cin >> A >> B;

        if (m.find(A) != m.end() && m.find(B) != m.end()) {
            if (m.find(m[A]) != m.end() && m.find(m[B]) != m.end()) {
                if (m[m[A]] == m[m[B]] && A != B) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }
}
