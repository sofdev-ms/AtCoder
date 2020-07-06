#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main(){
    ll n ,m;
    cin >> n >> m;
    char a[n][m];
    ll dp[n][m];
    memset(dp , 0 , sizeof(dp));
    dp[0][0] = 1;

    for(int i = 0;i < n ; i ++)
    {
        for(int j = 0; j  <m ; j ++)
        {
            cin >> a[i][j];
            
        }
    }
    for(int i = 1; i < m ; i ++)
    {
        if(a[0][i] == '.')
        dp[0][i] = 1;
        else
        break;
    }
    for(int j = 1; j < n ; j ++)
    {
        if(a[j][0] == '.')
        dp[j][0] = 1;
        else
        break;
    }
    for(int i = 1; i < n ; i ++)
    {
        for(int j = 1; j < m ; j ++)
        {
            if(a[i][j] == '.')
            {
                dp[i][j] = dp[i - 1][j] % mod + dp[i][j - 1] % mod;
                dp[i][j] %= mod;
            }
            else
            dp[i][j] = 0;
        }
    }
    cout << dp[n - 1][m - 1] % mod << endl;
}