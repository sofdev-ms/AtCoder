#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    long double a[n];
    for(int i =0 ; i < n ; i ++)
    cin >> a[i];
    long double dp[ n + 1][n + 1];
    dp[0][0] = 1;
    for(int i = 1; i <=n ; i ++)
    {
        dp[0][i] = dp[0][i - 1] * (1 - a[i - 1]);
    }
    for(int i = 1; i <=n ; i ++)
    dp[i][0] = 0;

    for(int i = 1; i <=n ; i ++)
    {
        for(int j = 1; j<=n ; j ++)
        {
            dp[i][j] =  a[j - 1] * dp[i - 1][j - 1] + (1 - a[j - 1]) * dp[i][j - 1];
        }
    }
    long double ans = 0.0;
    for(int i = (n + 1) /2 ; i<=n ; i ++)
    {
        ans += dp[i][n];
    }
    cout << fixed << setprecision(10);
    cout << ans << endl;
}