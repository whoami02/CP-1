#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t != 0){
        unsigned long long int n, k; cin >> n >> k;
        unsigned long long int x = n/k;
        cout << ((x%k == 0) ? "NO" : "YES") << endl;
        t--;
    }
}