#include <algorithm>
#include <iostream>
#include <vector>
#include <string>


bool check(vector<vector<string>> &m1, vector<vector<string>> &m2) {
  
  for (int i = 0; i < m1.length(); i++) {
    for (int j = 0; j < m1[i].length(); j++) {
      if (m1[i][j] != m2[i][j])
        return false;
    }
  }
  return true;
}

void v_shift(int rows, int cols, vector< vector<string> > &matrix) {
    rotate(matrix.begin(), matrix.begin()+1, matrix.end());
}

void h_shift(int rows, int cols, vector< vector<string> >& matrix) {
  for (int i = 0; i < rows; i++) {
    rotate(matrix[i].begin(), matrix[i].begin()+1, matrix[i].end());
  }
}


using namespace std;

int main() {
  int h, w; cin >> h >> w;

  vector<vector<string>> a, b;
  vector<string> row(w);

  for (int i = 0; i < h; i++) {
    for (auto& x: row) cin >> x;
    a.push_back(row);
  }
  
  for (int i = 0; i < h; i++) {
    for (auto& x: row) cin >> x;
    b.push_back(row);
  }

  for (int i = 1; i < h-1; i++) {
    v_shift(h, w, a);
    for (int j = 1; j < w-1; j++) {
      if (!check(a, b))
        h_shift(h, w, a);
      else {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
}
