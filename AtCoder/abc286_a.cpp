#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, p, q, r, s; cin >> n >> p >> q >> r >> s;
    vector<int> A(n);
    for (auto& x: A) cin >> x;
    
    for (int i = p-1, j = r-1; i < q; i++, j++)
        swap(A[i], A[j]);

    for (auto& x: A) cout << x << ' ';
    cout << '\n';
}
