// ACCEPTED
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int N, M;
    cin >> N >> M;

    vector g(N, vector<int>(N));

    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        g[u][v] = g[v][u] = w;
    }

    int ans = 0;
    vector<bool> vis(N);
    auto dfs = [&](auto self, int u, int sum) -> void {
        vis[u] = true;
        ans = max(ans, sum);
        for (int v = 0; v < N; v++) {

            /* g[u][v] > 0 speeds up the code by not
             * calling dfs for edges whose weights have
             * not been defined. Without it submission
             * is sure to give TLE.
             */
            
            if (g[u][v] > 0 && !vis[v]) {
                // find maximum depth among adjacent nodes
                self(self, v, sum + g[u][v]);
            }
        }
        
        /* this next line is important to get a global maxima,
         * otherwise every node will be marked visited before
         * we are able to find the maximum depth.
         */
        vis[u] = false;
    };

    for (int u = 0; u < N; u++) {
        dfs(dfs, u, 0);
    }
    cout << ans << '\n';
    return 0;
}
