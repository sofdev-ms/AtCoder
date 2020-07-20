#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define pp pair<ll, pair<ll, ll>>

int main()
{
    ll t;
    t = 1;
    //cin t;
    while (t--)
    {
        ll n, m, s;
        cin >> n >> m >> s;
        s = min(s , (ll)2500);
        vector<pair<ll, pair<ll, ll>>> adj[n + 1];
        for (ll i = 0; i < m; i++)
        {
            ll x, y, a, b;
            cin >> x >> y >> a >> b;
            adj[x].push_back({y, {a, b}});
            adj[y].push_back({x, {a, b}});
        }
        ll coins[n + 1], time[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> coins[i] >> time[i];
        ll dp[n + 1][2502];
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 0; j <= 2500; j++)
            {
                dp[i][j] = (ll)10e18;
            }
        }
        priority_queue<pp, vector<pp>, greater<pp>> pq;
        pq.push({0, {s, 1}});
        dp[1][s] = 0;
        while (!pq.empty())
        {
            pp temp = pq.top();
            pq.pop();
            ll cost1 = temp.first;
            ll silver = temp.second.first;
            ll node = temp.second.second;
            if (dp[node][silver] < cost1)
                continue;

            if (silver + coins[node] <= 2500)
            {
                if (dp[node][silver + coins[node]] > dp[node][silver] + time[node])
                {
                    dp[node][silver + coins[node]] = dp[node][silver] + time[node];
                    pq.push({dp[node][silver + coins[node]], {silver + coins[node], node}});
                }
            }
            for (auto x : adj[node])
            {
                ll child = x.first;
                ll expense = x.second.first;
                ll time1 = x.second.second;

                if (silver - expense >= 0)
                {
                    if (dp[child][silver - expense] > dp[node][silver] + time1)
                    {
                        dp[child][silver - expense] = dp[node][silver] + time1;
                        pq.push({dp[child][silver - expense], {silver - expense, child}});
                    }
                }
            }
        }
        for (ll i = 2; i <= n; i++)
        {
            ll res = (ll)10e18;
            for (ll j = 0; j <= 2500; j++)
                res = min(res, dp[i][j]);

            cout << res << endl;
        }
    }
}
