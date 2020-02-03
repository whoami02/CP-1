// GCD using Euclid's Algorithm
// Abhishek Atul Wani 10303320171124510003

#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    int t;
    while(y!=0){
        t = x;
        x = y;
        y  = t % x;
        printf("gcd(%d, %d) gives gcd(%d, %d)\n", t, x, x, y);
    }
    cout << "GCD is " << x << endl;
    return 0;
}

int main(){
    int a, b;
    cin >> a >> b;
    (a>b) ? (a,b = gcd(a,b)) : (a,b = gcd(b,a));
    return 0;
}