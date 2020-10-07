// SPOJ - Locker
// https://www.spoj.com/problems/LOCKER/
#include <iostream>

using namespace std;

typedef long long ll;

const long M = 1e9 + 7;

ll power(ll b){
  ll res = 1, a = 3;
  while(b){
    if(b&1){
      res = (res * a) % M;
    }
    a = (a * a) % M;
    b >>= 1;
  }
  return res % M;
}

int main(){
  int t;
  cin>>t;
  ll n;
  while(t-- && cin>>n){
    ll res = 1;
    if(n <= 3){
      cout<<n<<"\n";
      continue;
    }
    int rem = n % 3;
    ll qt = n / 3;
    switch(rem){
      case 0:{
        res = power(qt);
        break;
      }
      case 1:{
        res = ((ll)power(qt - 1) * 4) % M;
        break;
      }
      case 2:{
        res = ((ll)power(qt) * 2) % M;
      }
    }
    cout<<res<<"\n";
  }
  return 0;
}