#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s; cin >> s;
    for (auto& c: s) {
        if (c == '0') c = '1';
        else c = '0';
    }
    cout << s;
}
