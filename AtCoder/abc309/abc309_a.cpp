#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int a, b; cin >> a >> b;
  string str = to_string(a) + to_string(b);
  
  vector<string> arr = {"12", "13", "23", "45", "46", "56", "78", "79", "89"};

  for (auto ele: arr) {
    if (str == ele) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
}
