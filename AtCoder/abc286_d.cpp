#define ll long long

#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n, x; cin >> n >> x;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    }
    int sum = 0;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= B[i]; j++) {
            v.push_back(A[i]*j);
        }
    }
    int flag = 0;
    for (auto y: v) {
        if (x == y) {
            cout << "YES";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "NO";

    cout << '\n';
}    
