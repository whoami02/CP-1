//program to compute parity of a word

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int i, count=-2, J[1000];
    string ch;
    cin>>ch;
    
    // i = atoi(ch.c_str());
    for(i=0; i<=ch.size(); ++i){
        J[i] = static_cast<int>(ch[i]);
        count++;
    }
    int M[10000];
    for(i=0; i<=count; i++){
        cout<<J[i];
        // do{
        //     (J[i]%2 == 1) ? (M[i] = 1) : (M[i] = 0);
        //     J[i] /= 2; 
        // }while(J[i] != 1);
    }
    // for(i=0; i<=count; i++){
    //     cout << M[i];
    // }
}   
