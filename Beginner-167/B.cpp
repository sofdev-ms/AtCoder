#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
            ll a , b , c , d;
            cin >> a >> b >> c >> d;
            ll ans = 0;
            if(d!=0)
            {
                ans += min(a , d);
                d -= min(a , d);
            } 
            if(d!=0)
            {
                d-=min(b , d);
            }
            if(d!=0)
            {
                ans -= min(c, d);

            }
            cout << ans << endl;
   }
}
