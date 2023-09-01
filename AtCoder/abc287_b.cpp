#define ll long long

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, count = 0; cin >> n >> m;
    vector<string> s, t;

    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        s.push_back(str);
    }
    for (int i = 0; i < m; i++) {
        string str; cin >> str;
        t.push_back(str);
    }

    for (int i = 0; i < n; i++) {
        string temp = "";
        temp = temp + s[i][3] + s[i][4] + s[i][5];
        for (int j = 0; j < m; j++) {
            if (t[j] == temp) {
                count++;
                break;
            }
        }
    }
    
    cout << count << '\n';
}
