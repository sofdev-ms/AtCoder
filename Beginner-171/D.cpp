#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    // cin t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll count[100001] = {0};
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
            sum += a[i];
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            sum = sum - count[x] * x + count[x] * y;
            count[y] += count[x];
            count[x] = 0;
            cout << sum << endl;
        }
        
    }
}
