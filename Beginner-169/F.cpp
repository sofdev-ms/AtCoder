#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 998244353
int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
        ll n , s;
        cin >> n >> s;
        ll a[n];
        for(int i =0 ; i < n ; i ++)
        cin >> a[i];
        ll dp[n + 1][s + 1];
        for(int  i =0 ;  i <= n; i ++)
        {
            for(int j =0 ; j <= s ; j ++)
            dp[i][j] = 0;
        }     
        dp[0][0] = 1;
        for(int i = 1; i <= n ; i ++)
        {
            for(int j = 0; j <=s; j ++)
            {
                dp[i][j] = dp[i][j] % mod + dp[i - 1][j] * 2 % mod ;
                dp[i][j] %= mod;
                if(j >= a[i - 1])
                {
                    dp[i][j] = dp[i][j] % mod + dp[i - 1][j - a[i - 1]] % mod;
                }
                dp[i][j] %= mod;
            }
        }
        cout << dp[n][s] << endl;
   }
}
