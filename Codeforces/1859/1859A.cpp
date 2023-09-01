// ACCEPTED
#define ll long long

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (auto& x: a) cin >> x;
        
        vector<ll> b, c;
        sort(a.begin(), a.end(), greater<ll>());
        
        // check if all elements of the array are equal
        if (a[0] == a[a.size()-1]) {
            cout << "-1\n";
            continue;
        }

        int idx = -1;
        auto itr = a.rbegin();
        auto ele = *(a.rbegin());
        
        while (itr != a.rend()) {
            if (*itr == ele) {
                b.push_back(*itr);
                itr++;
                a.pop_back();
                continue;
            }
            itr++;
        }
        cout << b.size() << ' ' << a.size() << '\n';
        for (auto x: b) cout << x << ' ';
        cout << '\n';
        for (auto x: a) cout << x << ' ';
        cout << '\n';
    }
}
