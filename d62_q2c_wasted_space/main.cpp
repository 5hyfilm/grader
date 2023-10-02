#include <iostream>

using namespace std;

int main()
{
    int n, vSize=1;
    cin >> n;

    while (vSize < n)
    {
        vSize*=2;
    }
    cout << vSize-n;
}
