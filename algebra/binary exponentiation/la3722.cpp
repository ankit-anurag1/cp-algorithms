// LA - 3722 Jewel-eating Monsters
// https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1723

#include <iostream>

using namespace std;

typedef long long ll;

ll binExp(ll a, ll b, ll c){
  ll res = 1;
  while(b){
    if(b&1){
      res = (res * a) % c;
    }
    a = (a * a) % c;
    b >>= 1;
  }
  return res % c;
}

int main(){

  ll a, c, n, x;
  while(cin>>x>>a>>n>>c){
    if(x == 0 && a == 0 && n == 0 && c == 0) break;
    
    ll res = binExp(a, n, c);
    ll num = (a * (res - 1)) % c, den = a - 1;
    den = binExp(den, c - 2, c);
    res  = (((res * x) % c) - ((num * den) % c)) % c;
    if (res < 0) res += c;
    cout<<res<<"\n";
  }
  return 0;
}