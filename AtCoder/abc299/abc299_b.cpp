#define ll long long

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  ll n, t; cin >> n >> t;

  vector<ll>color(n), rank(n);
  map<ll, ll>m, pos;

  for (auto& x: color) cin >> x;
  
  for (ll i = 0; i < n; i++) {
    ll x; cin >> x;
    rank[i] = x;
    pos[x] = i;
    m[rank[i]] = color[i];
  }

  ll player_one_color = color[0];

  sort(rank.begin(), rank.end());
  
  for (ll i = n-1; i > -1; i--) {
    if (m[rank[i]] == t) {
      cout << pos[rank[i]]+1 << '\n';
      return 0;
    }
  }
  
  for (ll i = n-1; i > -1; i--) {
    if (m[rank[i]] == player_one_color) {
      cout << pos[rank[i]]+1 << '\n';
      return 0;
    }
  }
  return 0;
}
