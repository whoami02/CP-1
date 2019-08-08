// l_10137

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    while(1){
        int n; cin >> n;
        if(n == 0) break;
        vector<float>m;
        vector<float>k;
        int sum = 0;
        // int a[n];
        for(int i=0; i<n; i++){
            float x; cin >>x;
            m.push_back(x);
        }
        sort(m.begin(), m.end());
        
        sum = accumulate(m.begin(), m.end(), 0.0);
        float avg = sum/m.size();
        for(int i=0; i<n; i++){
            if(m[i] < avg) {
                float x = avg-m[i] ;
                k.push_back(x);
            }
            else continue;
        }
        avg = accumulate(k.begin(), k.end(), 0.0);
        cout << avg << endl;
    }
        
}
