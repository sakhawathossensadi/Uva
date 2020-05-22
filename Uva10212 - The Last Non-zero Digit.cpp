#include <bits/stdc++.h>

using namespace std;

const long long int mod = 100000000;

int main() {
  long long int n, m;
  while (cin >> n >> m) {
    long long int ans = 1;
    for (long long int i = 0; i < m; i++) {
            //cout<<i<<endl;
      ans *= n - i;
      while ((ans % 10) == 0) ans /= 10;
      ans %= mod;
    }
    cout << (ans % 10) << endl;
  }
  return 0;
}
