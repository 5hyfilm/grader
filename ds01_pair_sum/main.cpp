#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N, M;
    int arr[N], int want[M];

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<M; i++) {
        cin >> want[i];
    }

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (arr[i] + arr[j] == want[i]) {
                cout << "YES";
            }
            else
        }
    }
}
