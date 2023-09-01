//ACCEPTED
#define ll long long

#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int T; cin >> T;
    while (T--) {
        ll a, b, n, m, coins = -1; 
        cin >> a >> b >> n >> m;
        if (n <= m) {
            coins = (a <= b) ? a*n : b*n;
        } 
        else {
            ll promos = m*a*(n/(m+1)), rem = n%(m+1);
            if (a > b) coins = (promos + rem*b <= b*n) ? promos + rem*b : b*n;
            else coins = promos + rem*a;  
        }
        cout << coins << '\n';
    }
}