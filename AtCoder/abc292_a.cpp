#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << '\n';
}
