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
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = ans ^ a[i];
        };
        for (int i = 0; i < n; i++)
        {
            cout << (a[i] ^ ans) << " ";
        }
    }
}
