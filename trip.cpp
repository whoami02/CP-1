#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n){
    vector<float>m;
    vector<float>k;
    int sum = 0;
    // int a[n];
    for(int i=0; i<n; i++){
        float x; cin >>x;
        m.push_back(x);
    }
    sort(m.begin(), m.end());
    // float x = m.back();
    // for(int i=0; i<n; i++){
    //     float y = x-m[i];
    //     k.push_back(y);
    //     sum += y;
    // }
    int y = m.size();
    // sort(k.begin(), k.end());
    // cout << ( (y&1) ? (m[y/2 + 1]) :(m[(y/2+(y/2 + 1))/2]) ) << endl;
    cout << (m[y/2] - m[y/2-1]) << endl;
    if(n==0) break;
    else continue;
    }
    // return 0;
    
}