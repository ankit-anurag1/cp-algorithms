// UVa 11029 - Leading and Trailing
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1970

#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main(){
  int t;
  const int I = 1e3;
  cin>>t;
  long n, k;
  while(t-- && cin>>n>>k){
    int b =  n % I;
    long res1 = 1, res2 = 1;
    while(k){
      if(k&1){
        res1 = (res1 * n);
        res1 /= pow(10, (long)log10(res1) - 2);
        res2 = (res2 * b) % I;
      }
      n = (n*n);
      n /= pow(10, (long)log10(n) - 2);
      b = (b*b) % I;
      k >>= 1;
    }
    cout<<res1<<"..."<<res2<<"\n";
  }

  return 0;
}