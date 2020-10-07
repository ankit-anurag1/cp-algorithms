// UVa 1230 - MODEX
// http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3671

#include <iostream>

using namespace std;

typedef long long ll;

int main(){
  // const long M = 1e9 + 7;
  ll t;
  cin>>t;
  int x, n;
  long y;
  
  while(t-- && cin>>x>>y>>n){
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