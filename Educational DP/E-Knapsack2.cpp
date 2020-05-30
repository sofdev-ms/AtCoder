#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll n , w;
    cin >> n >> w;
    ll weight[n] , value[n];
    for(int i =0 ; i < n ; i ++)
    {
        cin >> weight[i] >> value[i];
    }
    ll dp[n + 1][100001];
    for(int i =0 ; i<= 100000 ; i ++)
    dp[0][i] = 1000 * (ll)INT_MAX;
    for(int j = 0 ; j <=n ; j ++)
    dp[j][0] = 0;
    ll ans = 0;
    for(int i = 1; i <=n ; i ++)
    {
        for(int j = 1; j <=100000 ; j ++)
        {
            if(j >= value[i - 1])
            {
                dp[i][j] = min(dp[i - 1][j] , weight[ i- 1 ] + dp[i - 1][j - value[ i - 1]]);
            }
            else
            dp[i][j] = dp[i - 1][j];
            
        }
    }
    for(int i = 0; i<= 100000;i++)
    {
        if(dp[n][i] <= w && dp[n][i] !=0)
        ans = i;
    }
    cout << ans << endl;
    //cout << dp[n][w] << endl;

}