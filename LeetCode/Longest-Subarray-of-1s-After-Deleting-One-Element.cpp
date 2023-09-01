#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> nums(n);

  for (auto& x: nums) cin >> x;

  for (int i = 1; i < n-1; i++) {
    if (nums[i] == 0) { // find all 101's
      int left = i-1, right = i+1;


    }
  }
}
