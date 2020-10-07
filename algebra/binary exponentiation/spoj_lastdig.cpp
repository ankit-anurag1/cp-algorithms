// SPOJ - The last digit
// https://www.spoj.com/problems/LASTDIG/

#include <iostream>

using namespace std;

typedef unsigned long ul;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int a;
    ul b;
    cin>>a>>b;
    a %= 10;
    if(a == 0 || a == 1 || b == 0){
      if(a == 0){
        cout<<0<<"\n";
        continue;
      }
      cout<<1<<"\n";
      continue;
    }
    int res = 1;
    while(b){
      if(b&1){
        res = (res * a) % 10;
      }
      a = (a*a) % 10;
      b >>= 1;
    }
    cout<<res % 10<<"\n";
  }

  return 0;
}