#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int n, m, u, v;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> path;
 
bool dfs(int curr) {
    visited[curr] = true;
    path.push_back(curr);
 
    if (curr == v) {
        return true;
    }
 
    for (int next_node : adj[curr]) {
        if (!visited[next_node]) {
            if (dfs(next_node)) {
                return true;
            }
        }
    }
 
    path.pop_back();
    return false;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    if (!(cin >> n >> m >> u >> v)) return 0;
 
    adj.resize(n + 1);
    visited.resize(n + 1, false);
 
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
 
    if (dfs(u)) {
        for (size_t i = 0; i < path.size(); ++i) {
            cout << path[i] << (i + 1 == path.size() ? "" : " ");
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
 
    return 0;
}
