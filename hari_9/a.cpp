#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

const int INF = 1e9;

int bfs(int s, int f, const vector<vector<int> >& graph) {
    int n = graph.size();
    vector<int> dist(n, INF);
    dist[s] = 0;

    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == f) return dist[u];

        for (int v = 0; v < n; ++v) {
            if (graph[u][v] == 1 && dist[v] == INF) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    return 0;
}

int main() {
    int n, s, f;
    cin >> n >> s >> f;

    vector<vector<int> > graph(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    int shortest_distance = bfs(s - 1, f - 1, graph);
    cout << shortest_distance << endl;

    return 0;
}