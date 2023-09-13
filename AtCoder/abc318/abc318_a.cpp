#define ll long long

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll N, M, P, ans = 0;
    cin >> N >> M >> P;
    if (M <= N) {
        ans++;
        ans += (N-M)/P;
    }
    cout << ans << '\n';
}
