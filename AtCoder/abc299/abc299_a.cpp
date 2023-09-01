#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, bar1 = -1, bar2 = -1, star = -1; cin >> n;
  string s; cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '|') {

      if (bar1 != -1) bar2 = i;
      else bar1 = i;

    }
    else if (s[i] == '*') star = i;
  }

  if (star > bar1 && star < bar2)
    cout << "in";
  else 
    cout << "out";
  cout << '\n';
}
