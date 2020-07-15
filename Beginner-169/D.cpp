#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
       ll n;
       cin >> n;
       ll count = 0;
       ll ans =0;
       while(n % 2 == 0 && n > 1)
       {
           n /=2 ;
           count ++;
       }      
       ans += (ll) (-1 + sqrt(1 + 8 * count)) / 2;
       for(ll i = 3 ; i * i <=n ; i +=2)
       {
           count =0;
           while(n % i == 0 && n > 1)
           {
               n/=i;
               count ++;
           }
           ans += (ll) (-1 + sqrt(1 + 8 * count)) / 2;
       } 
       if(n > 1)
       ans ++;

       cout << ans << endl;
   }
}
