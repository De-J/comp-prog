#include <iostream>

using namespace std;

int main() {
    int x = 5;
    auto func = [&]() -> void {
        int x = 10;
        x = 2;
        cout << x << '\n';
    };
    func();
    cout << x << '\n';
}
