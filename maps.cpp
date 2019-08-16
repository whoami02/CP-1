#include<bits/stdc++.h>
using namespace std;
int main() {
  int q, type; cin >> q; 
  string name;
  map<string,int> m; 
  for (int i(0), mark; i<q; ++i)
  {
    cin >> type >> name;
    if (type == 1){
      cin >> mark;
      m[name] += mark;
    }
    else if (type == 2)
      m.erase(name);
    else
      cout << m[name] << endl;
  }
 return 0;
}
