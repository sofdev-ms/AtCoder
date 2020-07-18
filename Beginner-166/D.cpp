#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
        ll x1;
        cin >> x1;
        for(ll i = 0; i <= 1001 ; i ++)
        {
            for(ll j = 0; j < i ; j ++)
            {
                ll x = (ll)pow(i , (ll)5);
                ll y = (ll)pow(j , (ll)5);
                if( (x - y == x1))
                {
                    cout << i << " " << j << endl;
                    return 0;
                }
                if(x + y == x1)
                {
                    cout << i << " " << -1 * j << endl;
                    return 0;
                }
                
            }
        }  
   }
}
