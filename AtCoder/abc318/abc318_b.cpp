// ACCEPTED
#include <iostream>
#include <vector>

using namespace std;


int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int N, area = 0; cin >> N;
    vector plane(100, vector<bool>(100));

    for (int i = 0; i < N; i++) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        for (int x = A; x < B; x++) {
            for (int y = C; y < D; y++) {
                plane[x][y] = true;
            }
        }
    }
    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            if (plane[x][y] == true) area++;
        }
    }
    cout << area << '\n';
}
