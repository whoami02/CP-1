#include<bits/stdc++.h>
using namespace std;

int fact(int x){
    while(x%2==0){
        cout << 2;
        x = x/2 ;
    }
    for(int i = 3; i < sqrt(x); i=i+2){
        while(x%i == 0){
            cout << i;
            x = x/i;
        }
    }
    if(x >2) cout << x;
}

int main(){
    int n;
    cin >> n;
    fact(n);
    return 0;
}