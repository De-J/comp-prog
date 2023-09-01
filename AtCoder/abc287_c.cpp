#define ll long long
#include <bits/stdc++.h>

using namespace std;

class Graph {
    int V; 
    list<int>* adj;
    
    public:
    Graph(int V) {
        adj = new list<int>[V];
    }
    
    void addEdge(int u, int v) {
        /* Short functions are declared inside 
        the class so that they are inline */
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void DFS(int v);
};

void Graph::DFS(int v) {
    stack<int> s;
    vector<bool> visited(V);
    s.push(v);
    while (!s.empty()) {
        v = s.top();
        s.pop();
        if (!visited[v]) {
            visited[v] = true;
            for (auto edge: adj[v])
                s.push(edge);
        }
    }
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n);

    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        u -= 1; v -= 1;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    // ensuring number of edges is one less than number of vertices

    if (m != n-1) {
        cout << "No\n";
        return 0;
    }

    //ensuring degree of each vertex is not more than 2

    for (auto v: G) {
        if (v.size() > 2) {
            cout << "No\n";
            return 0;
        }
    }
    
    //ensuring connectivity of the graph

    vector<bool> visited(n);
    stack<int> s;
    s.push(0);
    while (!s.empty()) {
        int t = s.top();
        s.pop();
        if (!visited[t]) {
            visited[t] = true;
            for (auto edge: G[t])
                s.push(edge);
        }
    }

    for (auto x: visited) {
        if (x == false) {
            cout << "No\n"; //if a node was unaccessible during DFS, it means that the graph is not connected
            return 0;
        }
    }
    
    cout << "Yes\n";
    return 0;
}
