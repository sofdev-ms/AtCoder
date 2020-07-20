#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin t;
   while(t--){
      string s;
      cin >> s;
      int len = s.length();
      int ans = 0;
      int pre[len];
      pre[len - 1] = (ll)(s[len - 1] - '0');
      ll p = 1;
      int count[2019] = {0};
      count[0] = 1;
      count[pre[len - 1]]++;
      
      for(int i = len - 2; i >= 0 ; i --)
      {
          p *= 10;
          p %= 2019;
          pre[i] = (pre[i + 1] % 2019 + ((ll)(s[i] - '0') * p ) % 2019) % 2019;
         // cout << pre[i] << " ";
          ans += count[pre[i]];
          count[pre[i]]++;

      }       
      //cout << endl;
      cout << ans << endl;
   }
}
