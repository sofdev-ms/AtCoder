#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin t;
   while(t--){
        ll n , m;
        cin >> n >> m;
        ll ans = n;
        ll h[n + 1];
        for(int i =1; i <=n ; i ++)
        cin >> h[i];
        bool visited[n + 1] = {0};
        for(int i =0 ; i < m ; i ++)
        {
            ll x, y;
            cin >> x >> y;
            if(h[x] <= h[y] && !visited[x])
            {
                visited[x] = true;
                ans --;
            }

            if(h[x] >= h[y] && !visited[y])
            {
                visited[y] = true;
                ans --;
            }


        } 
        cout << ans << endl;
   }
}
