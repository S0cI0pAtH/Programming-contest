#include <bits/stdc++.h>

using namespace std;

void debug_out() { cerr << endl; }
template <typename H, typename... T> void debug_out(H h, T... t) {  cerr << " " << (h);  debug_out(t...); }
void read() {}
template <typename H, typename... T> void read(H &h, T&... t) { cin >> h; read(t...) ;}

#ifndef LOCAL
#define endl '\n'
#define debug(...) //
#else
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#endif


void solve() {
  int n; cin >> n;
  vector<int> a(n);

  for (auto &i : a) cin >> i;

  int winner = 0;
  vector<int> ans(n);

  for (int i = 1; i < n; i++) {
    if (a[winner] < a[i]) winner = i;
    ans[winner]++;
  }

  for (auto it : ans)
    cout << it << " ";
  cout << endl;
}


int main() {
#ifndef LOCAL
  ios_base::sync_with_stdio(false); cin.tie(NULL);
#endif
  //int tc; cin >> tc;
  //while (tc--)
    solve();
  return 0;
}

