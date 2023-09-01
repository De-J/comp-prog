#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

char func(vector<char>& v) {
    char c = v[v.size()-1];
    v.pop_back();
    return c;
}

int main() {

    int n; cin >> n;
    vector<string> grid;
    
    for (int i = 0; i < n; i++) {
        string row; cin >> row;
        grid.push_back(row);
    }
    
    vector<char> v;

    for (int i = 0; i < n; i++) v.push_back(grid[0][i]);
    for (int i = 1; i < n-1; i++) v.push_back(grid[i][n-1]);
    for (int i = n-1; i > -1; i--) v.push_back(grid[n-1][i]);
    for (int i = n-2; i > 0 ; i--) v.push_back(grid[i][0]);

    v.insert(v.begin(), v[v.size()-1]);
    v.pop_back();
    reverse(v.begin(), v.end());
    
    for (int i = 0; i < n; i++) grid[0][i] = func(v);
    for (int i = 1; i < n-1; i++) grid[i][n-1] = func(v);
    for (int i = n-1; i > -1; i--) grid[n-1][i] = func(v);
    for (int i = n-2; i > 0 ; i--) grid[i][0] = func(v);

    for (auto row: grid)
        cout << row << '\n';
}
