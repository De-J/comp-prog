#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a = 0, b = 1, c = 3;
    vector<int> v;
    v.push_back(12); 
    v.push_back(13); 
    v.push_back(14); 
    for (auto x: v) cout << x;
}
