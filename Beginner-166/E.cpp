#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin t;
   while(t--){
         ll n;
         cin >> n;
         ll a[n];
         map < int , int > count;
         for(int i =0 ; i < n ; i++)
         {
             cin >> a[i];
             count[ i + 1 - a[i]]++;
         }    
         ll ans = 0;
         for(int i = 0; i < n;i ++)
         {
             count[ i + 1 - a[i]]--;
             ans += count[i + 1 + a[i]];
         }
         cout << ans << endl;
   }
}
