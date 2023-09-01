#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, R, r1, c1, r2, c2;
    cin >> N >> M >> R;

    int matrix[N][M];

    for (int i=0; i<N; i++) {
         for (int j=0; j<M; j++) {
            cin >> matrix[i][j];
         }
    }

    for (int k=0; k<R; k++) {
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 || c1 > c2) {
            cout << "INVALID" << endl;
        }
        else if (r1 > N || c1 > M || r2 <= 0 || c2 <= 0){
            cout << "OUTSIDE" << endl;
        }
        else {
            vector<int> temp;
            for (int x=r1-1; x<r2 && x<N; x++) {
                for (int y=c1-1; y<c2 && y<M; y++) {
                    temp.push_back(matrix[x][y]);
                }
            }
            cout << *max_element(temp.begin(), temp.end()) << endl;
        }
    }
}
