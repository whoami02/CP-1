#include<bits/stdc++.h>
using namespace std;

char flip(int n, char a[], int i){
    if(a[i] == 1) {
        a[i-1] = 1 - a[i-1];
        a[i+1] = 1 - a[i+1];
        a[i] = 'A';
    }
    else{
        
    }
}

int main(){
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[n];
    }
    int flag;
    for(int i = 0; i < n; i++){
        if(a[i] == 'A')
            flag = 1;
        else{
            flip(n, a, i);
            flag = 0;
        }
            
    }
    
    
}