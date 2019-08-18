#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N, Q, i;
    cin >> N;
    int a[N];
    for(i = 0; i < N; i++)
        cin >> a[i];
    cin >> Q;
    int b[Q];
    for(i = 0; i < Q; i++)
        cin >> b[i];
    for(i = 0; i <= Q; i++){                //Query
        for(int j = 0; j <= N; j++){            //DB
            if(b[i] == a[j]){
                cout << "Yes " << j+1 << endl;
                i++;
                break;
            }
        }
        for(int j = 0; j <= N; j++){            //DB
            // else{
            if(a[j] != b[i]){
                // cout <<"No "<< j + 1<< endl;
                continue;
            }
            cout <<"No "<< j + 1<< endl;
        }
        // cout <<"No "<< i + 1<< endl;
    }
    return 0;
}
