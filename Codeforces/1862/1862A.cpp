// ACCEPTED
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int T; cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;

        vector<string> carpet(n);
        vector<char> name = { 'a', 'k', 'i', 'v' };
        
        for (auto& row: carpet) cin >> row;

        int i = 0, j = 0;
        while(i < n && j < m) {
            if (name.size() > 0) {
                if (carpet[i][j] == name.back()) {
                    name.pop_back();
                    j++; i = 0;
                }
                else if (i == n-1) {
                    j++; i = 0;
                }
                else i++;
            }
            else break;
        }

        if (name.size() > 0)
            cout << "NO";
        else
            cout << "YES";
        cout << "\n";
    }
}
