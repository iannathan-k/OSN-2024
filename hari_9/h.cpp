#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

const int MAX_N = 1000;

vector<vector<int>> graph(MAX_N);
vector<bool> visited(MAX_N, false);  // Track visited nodes for DFS
int n, m, s, t;

void dfs(int u) {
    visited[u] = true;
    for (int v : graph[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

bool isConnected(int u, int v) {
    // Reset visited array for each check
    fill(visited.begin(), visited.end(), false);

    // Perform DFS from both u and v
    dfs(u);
    return visited[v];
}

int countValidPairs() {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            // Check if i and j are not connected and building a road won't affect s-t distance
            if (!isConnected(i, j) && !isConnected(s, j) && !isConnected(i, t)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    cin >> n >> m >> s >> t;

    // Input graph connections
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);  // Bidirectional roads
    }

    cout << countValidPairs() << endl;

    return 0;
}
