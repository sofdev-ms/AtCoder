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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll p = 1;
        sort(a , a+n);
        for (int i =0 ; i < n ; i ++)
        {
            long double temp= 1000000000000000000 * 1.0;
            if((long double)a[i] > temp / p)
            {
                cout << "-1" << endl;
                return 0;
            }
            p = p *a[i];
        }
        cout << p <<endl;
    }
}
