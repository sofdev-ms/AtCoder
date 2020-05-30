#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll n;
    cin >> n;
    ll happiness[n][3];
    for(int i =0 ; i < n ; i ++)
    {
        cin >> happiness[i][0] >>  happiness[i][1] >> happiness[i][2];
    }
    ll dp[n][3];
    dp[0][0] = happiness[0][0];
    dp[0][1] = happiness[0][1];
    dp[0][2] = happiness[0][2];
    for(int i = 1 ; i < n; i++){
        dp[i][0] = happiness[i][0] + max(dp[i - 1][1] , dp[i - 1][2]);
        dp[i][2] = happiness[i][2] + max(dp[i - 1][1] , dp[i - 1][0]);
        dp[i][1] = happiness[i][1] + max(dp[i - 1][0] , dp[i - 1][2]); 
    }
    cout << max(dp[n- 1][0] , max(dp[n - 1][1] , dp[ n - 1][2]));
}