#include <iostream>
#include <cstring>

using namespace std;

void func(char str[]) {
    char c = str[0]; int cnt = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) cnt++;
        else {
            cout << c;
            if (cnt != 1) cout << cnt;
            cnt = 1;
            c = str[i];
        }
    }
    cout << c;
    if (cnt != 1) cout << cnt;
    return;
}


int main() {
   char str[] = {"abbccccc"};
   func(str);
}
