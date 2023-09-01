#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    map<int, int> m;
    int n, q; cin >> n >> q;
    while (q--) {
        int e, x; cin >> e >> x;
        if (e == 1) {
            if (m[x] != -1) {
                m[x]++;
                if (m[x] >= 2) m[x] = -1;
            }
        }
        else if (e == 2) {
            m[x] = -1;
        }
        else {
            if (m[x] == -1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
