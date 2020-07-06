#include <bits/stdc++.h>

using namespace std;
#define ll long long int

void dfs(vector<int> adj[], bool visited[], int node, ll dist[])
{
    visited[node] = true;
    for (auto x : adj[node])
    {
        if (!visited[x])
        {
            dfs(adj, visited, x, dist);
        }

        dist[node] = max(dist[node], 1 + dist[x]);
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    int degree[n + 1] = {0};
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        degree[y]++;
    }
    ll ans = 1;
    bool visited[n + 1] = {0};
    ll dist[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        ll count = 0;
        if (degree[i] == 0)
        {
            visited[i] = true;
            for (auto x : adj[i])
            {
                if (!visited[x])
                {
                    dfs(adj, visited, x, dist);
                }
                dist[i] = max(dist[i], 1 + dist[x]);
            }
        }
        ans = max(dist[i], ans);
    }
    cout << ans << endl;
}