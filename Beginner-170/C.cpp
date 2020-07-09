#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
         ll x , n;
         cin >> x >> n;
         ll a[n];
         ll count[103] = {0};
         for(int i = 0; i < n ; i ++)
         {
             cin >> a[i];
             count[a[i]]++;
         }    
         int diff = INT_MAX;
         int ans = -1;
         for(int i = 0; i<= 102; i ++)
         {
             if(!count[i])
             {
                 if(diff > abs( i -x))
                 {
                     diff= abs(i - x);
                     ans = i;
                 }
             }
         }
         cout << ans << endl;

   }
}
