// UVa 374 - Big Mod
// http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=310

#include <iostream>

using namespace std;

typedef long long ll;

int main(){
  long x, y, n;
  while(cin>>x>>y>>n){
    ll res = 1;
    while(y){
      if(y&1){
        res = (res * x) % n;
      }
      x = (x*x) % n;
      y >>= 1;
    }
    cout<<res<<"\n";
  }

  return 0;
}