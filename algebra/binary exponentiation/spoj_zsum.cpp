// SPOJ - Just add it
// https://www.spoj.com/problems/ZSUM/

#include <iostream>

using namespace std;

const long M = 1e7 + 7;

long binPow(long long a, long long b){
  long long res = 1;
  while(b){
    if(b&1) res = (res * a) % M;
    a =  (a * a) % M;
    b >>= 1;
  }
  return res;
}

int main(){

  long long n, k;
  while(cin>>n>>k){
    if(n == 0 && k == 0) break;
    if(n == 1){
      cout<<"2\n";
    }
    long res;
    if(k == 0) res = 2;
    else res = (binPow(n, k) + 2 * binPow(n - 1, k)) % M;
    res = (res + ((binPow(n, n) + 2 * binPow(n - 1, n - 1)) % M)) % M;
    cout<<res<<"\n";
  }
  return 0;
}