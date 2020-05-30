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
    ll dp[n + 1][w + 1];
    memset(dp , 0 , sizeof(dp));
    for(int i = 1; i <=n ; i ++)
    {
        for(int j = 1; j <=w ; j ++)
        {
            if(j >= weight[i - 1])
            dp[i][j] = max(dp[i - 1][j] , value[ i- 1 ] + dp[i - 1][j - weight[ i - 1]]);
            else
            dp[i][j] = max(dp[i][j] , dp[i - 1][j]);
            
        }
    }
    cout << dp[n][w] << endl;

}