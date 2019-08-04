#include<bits/stdc++.h>
using namespace std;

int max(unsigned int i, int count){
    (i%2 == 0) ? i=i/2 : i = 3*i + 1;
    count += 1;
    if(i != 1)
        max(i, count);
    else
        return count;
}
int main(){
    int t; cin >> t;
    while(t != 0){
    unsigned int a, b;
    cin >> a >> b;
    vector<int>m;
    if(a>b) cout << "Invalid Input" << endl;
    else{
    for(unsigned int i = a; i <= b; i++){
        int k = 1;
        m.push_back(max(i, k));
    }
    sort(m.begin(), m.end());
    cout << a << " " << b << " " << m.back() << endl;
    }
    t--;
    }
}