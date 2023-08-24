#include <iostream>
#include <vector>
using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
    //write some code here
    vector<string> temp;

    for (auto itr=v.begin(); itr<it-k; itr++) {
        temp.push_back(*itr);
    }

    for (auto itr2=it+k+1; itr2<v.end(); itr2++)
        temp.push_back(*itr2);

    v = temp;

    //donÕt forget to return something
    return v;
}

int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);

    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }

    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);

    for (auto &x : result) {
        cout << x << endl;
    }
}
