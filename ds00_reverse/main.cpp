#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v,int a,int b) {
 //write your code only in this function

    int temp;

    for (; a<b; a++, b--) {
        temp = v[b];
        v[b] = v[a];
        v[a] = temp;
    }

//    vector<int> temp;
//
//    for (int i=0; i<a; i++){
//        temp.push_back(v[i]);
//    }
//
//    for (int j=b; j > a-1; j--){
//        temp.push_back(v[j]);
//    }
//
//    int k=temp.size();
//
//    for (int j=b+1; j< v.size(); j++){
//        temp.push_back(v[j]);
//    }
//
//    v = temp;
}

int main() {
 //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }

    cin >> a >> b;

    //call function
    reverse(v,a,b);

    //display content of the vector
    for (auto &x : v)
        cout << x << " ";
        cout << endl;
}
