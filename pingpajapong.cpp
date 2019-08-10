#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    long X[T], Y[T], K[T], a[T];
    vector<string>ppp;
    for(int i = 0; i < T; i++){
        cin >> X[i] >> Y[i] >> K[i];
        a[i] = X[i] + Y[i];
        int x = a[i] / K[i];
        (x % 2 == 0) ? ppp.push_back("Chef") : ppp.push_back("Paja");
    }

    for(int i = 0; i < T; i++){
        cout << ppp[i] << endl;
    }

    return 0;
}