#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5;
vector<int> edge[maxn];
int sub[maxn];
int visited[maxn];
int n;

void dfs(int now) {
    if (visited[now] == 1) return;
    visited[now] = 1;
    sub[now] = 0;

    for (int i : edge[now]) {
        if(visited[i] == 1) continue;
        dfs(i);
        sub[now] += sub[i] + 1;
    }
}

int main() {
    cin >> n;

    for (int i = 2; i <= n; i++) {
        int a;
        cin >> a;
        edge[a].push_back(i);
    }
    dfs(1);

    for (int i = 1; i <= n; i++) {
        cout << sub[i] << endl;
    }

    return 0;
}