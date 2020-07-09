#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
         ll a[5];
         ll ans;
         for(int i =0 ; i < 5 ; i ++)
         {
             cin >> a[i];
             if(a[i] == 0)
             ans = i + 1;
         }    
         cout << ans << endl;
   }
}
