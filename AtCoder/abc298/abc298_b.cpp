#include <iostream>
#include <string>
#include <vector>

using namespace std;

void input(vector<vector<int>>& matrix, int size) {
    vector<int> row(size);
    for (int i = 1; i <= size; i++) {
        for (auto& x: row) cin >> x;
        matrix.push_back(row);
    }
}

void rotate(vector<vector<int>>& matrix, int size) {
    vector<vector<int>> copy = matrix;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            matrix[i-1][j-1] = copy[(size+1-j)-1][i-1];
        }
    }
}

bool check(vector<vector<int>> A, vector<vector<int>> B, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (A[i][j] == 1) {
                if (B[i][j] != 1)
                    return false;
            }
        }
    }
    return true;
}

int main() {
    int n; cin >> n; string ans = "";
    vector<vector<int>> A, B;
    input(A, n);
    input(B, n);
    for (int i = 0; i < 3; i++) {
        bool val = check(A, B, n);
        
        if (!val) {
            ans = "No";
            rotate(A, n);
        }
        else {
            ans = "Yes";
            break;
        }
    }
    ans = (check(A, B, n)) ? "Yes" : "No";
    cout << ans << '\n';
    return 0;
}