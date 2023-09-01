#define ll long long

#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    string s, ans = "", temp; cin >> s;
    int i = 1; 
    while (i < n) {
        temp = "";
        temp += s[i-1];
        temp += s[i];
            
        if (temp == "na") {
            ans += "nya";
            i += 2;
        }
        else {
            ans += s[i-1];
            i++;
        }
    }
    temp = "";
    temp += s[n-2];
    temp += s[n-1]; 
    if (temp != "na") ans += s[n-1];
    cout << ans << '\n';
}
