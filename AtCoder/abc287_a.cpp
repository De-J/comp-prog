#define ll long long

#include <bits/stdc++.h>

using namespace std;

int main() {

        int n, count = 0; cin >> n;
        string s;

        for (int i = 0; i < n; i++) {
            cin >> s;
            if (s == "For")
                count++;
        }
        if (n - count > count)
            cout << "No";
        else
            cout << "Yes";
        cout << '\n';
}
    
