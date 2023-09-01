#include <iostream>

using namespace std;

int main()
{
    int H, M, X;
    string h, m;

    cin >> H >> M >> X;

    H += X/60;
    M += X%60;

    H += M/60;
    M = M%60;
    H = H%24;

    if (H < 10) {
        h = "0" + to_string(H);
    }
    else{
        h = to_string(H);
    }

    if (M < 10) {
        m = "0" + to_string(M);
    }
    else{
        m = to_string(M);
    }

    cout << h << " " << m;
}
