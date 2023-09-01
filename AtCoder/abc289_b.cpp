//Accepted
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, e; cin >> n >> e;
    vector<int> b(e+n, 1);
    map<int, int> m;
    for (int i = 1; i <= n; i++) {
        m[i] = 1;
    } 
    for (int i = 0, x; i < e; i++) {
        cin >> x;
        m[x] = 0;
    }
    
    int index = 0, count = 1;
    while (count <= n) {
        if (m[count] != 0) b[index] = count;

        else {
            b[index] = count;
            index++;
            b[index] = 0;
        }
        count++;
        index++;
    }

    if (e == 0) {
        for (auto x: b) cout << x << ' ';
        return 0;
    }

    vector<int> ans, ord;
    int i = 1;
    while (i < e+n) {
        if (b[i] == 0) {
            ord.push_back(b[i-1]);
            if (i == e+n-2) {
                ord.push_back(b[i+1]);
                reverse_copy(ord.begin(), ord.end(), back_inserter(ans));
            }
            i += 2;
        }
        else {
            ord.push_back(b[i-1]);
            reverse_copy(ord.begin(), ord.end(), back_inserter(ans));
            ord.clear();
            while (b[i] != 0 && i < e+n) {
                ans.push_back(b[i]);
                i++;
            }
            ans.pop_back();
        }
    }
    for (int i = 0; i < n; i++) cout << ans[i] << ' ';
}
