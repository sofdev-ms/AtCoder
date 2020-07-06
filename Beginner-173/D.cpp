#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin >> t;
   while(t--){
         ll n;
         cin >> n;
         ll a[n];
         for(int i =0 ; i < n ; i++)
         {
             cin >> a[i];
         }    
         sort(a , a + n);
         ll ans = 0;
         ll i = n - 2;
         ll j = n - 1;
         ll count = 1;
         while( i >=0)
         {
             while(count!=0 && i>=0)
             {
                 ans += a[j];
                 count--;
                 i--;
             }
             count = 2;
             j--;

         }
         cout << ans << endl;
   }
}
