#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll n;
    cin >> n;
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
        dp[i + 1] = min(dp[i + 1] , dp[i] + abs(height[i + 1] - height[i]));
        dp[i + 2] = min(dp[i + 2] , dp[i] + abs(height[i + 2] - height[i]));
    }
    cout << dp[n - 1] << endl;
}