#include <bits/stdc++.h>

using namespace std;
int a[6][6];
void find(int &ans, int rows[], int columns[], int x, int y, int k, int n, int m)
{
    if (k == 0 && x >= n && y >= m)
    {
        ans++;
    }
    if (x < n || y < m)
    {
        if (x < n)
        {
            for(int i =0 ; i < m ; i ++)
            {
                if(a[x][i] == 1)
                columns[i]--;
            }
            find(ans, rows, columns, x + 1, y + 1, k - rows[x], n, m);
            for(int i =0 ; i < m ; i ++)
            {
                if(a[x][i] == 1)
                columns[i]++;
            }
        }
        if (x < n && y < m)
        {
            for(int i =0 ; i < m ; i ++)
            {
                if(a[x][i] == 1)
                columns[i]--;
            }
            for(int i =0 ; i < n ; i ++)
            {
                if(a[i][y] == 1)
                rows[i]--;
            }
            find(ans, rows, columns, x + 1, y + 1, k - rows[x] - columns[y] - a[x][y], n, m);
            for(int i =0 ; i < m ; i ++)
            {
                if(a[x][i] == 1)
                columns[i]++;
            }
            for(int i =0 ; i < n ; i ++)
            {
                if(a[i][y] == 1)
                rows[i]++;
            }
        }
        if (y < m)
        {
            for(int i =0 ; i < n ; i ++)
            {
                if(a[i][y] == 1)
                rows[i]--;
            }
            find(ans, rows, columns, x + 1, y + 1, k - columns[y], n, m);
            for(int i =0 ; i < n ; i ++)
            {
                if(a[i][y] == 1)
                rows[i]++;
            }
        }
        {
            find(ans, rows, columns, x + 1, y + 1, k, n, m);
        }
    }
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int rows[n] = {0};
    int columns[m] = {0};
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            a[i][j] = 0;
            if (x == '#')
            {
                rows[i]++;
                columns[j]++;
                a[i][j] = 1;
                total++;
            }
        }
    }
    int ans = 0;
    find(ans, rows, columns, 0, 0, total - k, n, m);
    cout << ans << endl;
}