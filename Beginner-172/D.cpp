#include<bits/stdc++.h>

using namespace std;
#define ll long long int


int main()
{
   ll t;
   t = 1;	
//    cin t;
   while(t--){
        ll n;
        cin >> n;
        ll ans = 0;
        for(int i = 1; i <=n ; i ++)
        {
            ll x = n / i;
            ans += (i + i * x) * x / 2;
        }

        cout << ans << endl;   
   }
}
