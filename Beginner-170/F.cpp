#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    //cin t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll x, y, x1, y1;
        cin >> x >> y >> x1 >> y1;
        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {-1, 1, 0, 0};
        char a[n][m];
        ll dist[n][m];
        bool visited[n][m];
        x--;
        y--;
        x1--;
        y1--;
        if (a[x1][y1] == '@')
        {
            cout << "-1" << endl;
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dist[i][j] = INT_MAX;
                visited[i][j] = false;
                cin >> a[i][j];
            }
        }
        queue<pair<int, int>> q;
        q.push({x, y});
        visited[x][y] = true;
        dist[x][y] = 0;
        while (!q.empty())
        {
            pair<int, int> temp = q.front();
            q.pop();
            if(temp.first == x1 && temp.second == y1)
            break;
            for (int i = 0; i < 4; i++)
            {
                int x2 = temp.first;
                int y2 = temp.second;
                for (int j = 0; j < k; j++)
                {
                    x2 += dx[i];
                    y2 += dy[i];
                    if (x2 >= 0 && x2 < n && y2 >= 0 && y2 < m && a[x2][y2] != '@')
                    {
                        if (!visited[x2][y2])
                        {
                            visited[x2][y2] = true;
                            q.push({x2, y2});
                            dist[x2][y2] = 1 + dist[temp.first][temp.second];
                        }
                        else
                        {
                            if(dist[x2][y2] < 1 + dist[temp.first][temp.second])
                            break;
                            dist[x2][y2] = min((ll)dist[x2][y2], (ll)1 + dist[temp.first][temp.second]);
                        }
                            
                    }
                    else
                        break;
                }
            }
        }
        if (dist[x1][y1] == INT_MAX)
            cout << "-1" << endl;
        else
            cout << dist[x1][y1] << endl;
    }
}

