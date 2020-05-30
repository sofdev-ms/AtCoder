#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll n , k;
    cin >> n >> k;
    ll height[n];
    ll dp[n];
    for(int i =0 ; i  < n ; i ++)
    {
        cin >> height[i];
        dp[i] = INT_MAX;
    }
    
    dp[0] =0 ;
    for(int i = 0; i < n - 1 ; i ++)
    {
        for(int j = 1; j <= min(k , n - 1) ; j ++)
        dp[i + j] = min(dp[i + j] , dp[i] + abs(height[i + j] - height[i]));
        //dp[i + 2] = min(dp[i + 2] , dp[i] + abs(height[i + 2] - height[i]));
    }
    cout << dp[n - 1] << endl;
}