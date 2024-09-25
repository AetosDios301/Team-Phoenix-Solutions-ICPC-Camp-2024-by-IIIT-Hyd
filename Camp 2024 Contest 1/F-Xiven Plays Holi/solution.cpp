#include <bits/stdc++.h>
using namespace std;

#define str string
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, c, n) for (int i = (c); i < (n); i++)
// clang-format off
#define LOOP(t) int t; cin >> t; while(t--)
// clang-format on

const int MOD = 1000000007;

int main() {
  int n;
  cin >> n;

  vector<ll> perm(n + 1, 0);
  perm[1] = 0;
  if (n >= 2)
    perm[2] = 1;

  for (int i = 3; i <= n; i++) {
    perm[i] = (i - 1) * (perm[i - 1] + perm[i - 2]) % MOD;
  }

  cout << perm[n] << endl;
  return 0;
}
