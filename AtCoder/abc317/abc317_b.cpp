#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    vector<int> a(n);

    for (auto& x: a) cin >> x;
    sort(a.begin(), a.end());

    for (int i = 0; i < n-1; i++) {
        if (a[i] != a[i+1] - 1) {
            cout << a[i] + 1 << '\n';
            return 0;
        }
    }
    if (a[0] != 1) cout << 1;
    else cout << a[n-1]+1;
    cout << '\n';
}
