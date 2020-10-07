// Codeforces - Parking Lot
// https://codeforces.com/problemset/problem/630/I

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef unsigned long long ull;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n;
  cin>>n;

  ull waysArrgmnt = 6 * (ull)pow(4, n - 2) + 9 * (n - 3) * (ull)pow(4, n - 3);

  cout<<waysArrgmnt;

  return 0;
}