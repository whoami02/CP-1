#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    unsigned int sum = 0, value; 
    for(int i=0; i<n; i++){
        cin >> value;
        sum += value;
    }
    cout << sum;
    return 0;
}