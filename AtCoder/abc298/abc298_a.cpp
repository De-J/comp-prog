//ACCEPTED
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<bool> row(n);
    vector<vector<int>> matrix;
    

    string s; cin >> s;
    
    for (auto c: s) {
        switch (c) { 
            case 'o': {
                good++;
                break;
            }
            case 'x': {
                poor++;
                break;
            }
            default: break; 
        }
    }

    if (poor == 0) {
        if (good > 0)
            cout << "Yes\n";
        
        else cout << "No\n";
    }
    else cout << "No\n";
    
    return 0;
}