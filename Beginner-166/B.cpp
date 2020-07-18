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
        ll n,k;
        cin >> n >> k;
        int count[n + 1] = {0};
        for(int i =0 ; i < k ; i ++)
        {
            int x;
            cin >> x;
            for(int j = 0 ;j < x;  j ++)
            {
                int y;
                cin >> y;
                count[y] =1;
            }
        }
        int ans = 0;
        for(int i =1 ; i <= n ; i ++)
        {
            if(count[i] == 0)
            ans ++;
        }
        cout << ans << endl;
    }
}
