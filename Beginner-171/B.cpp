#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin t;
   while(t--){
             ll n, k;
             cin >> n >> k;
             ll a[n];
             for(int i =0 ; i < n ; i++)
             cin >> a[i];
             sort(a , a+n);
             ll ans =0 ;
             for(int i =0 ; i < k; i ++)
             ans += a[i];
             cout << ans << endl;
   }
}
