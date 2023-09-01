#include <iostream>
#include <vector>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, h, x;
    cin >> n >> h >> x;

    vector<int> p(n);
    for (auto& num: p) cin >> num;


    for (int i = 0; i < n; i++) {
        if (p[i] >= x-h) {
            cout << i+1 << '\n';
            break;
        }
    }
}
