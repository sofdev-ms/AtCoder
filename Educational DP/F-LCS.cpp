#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    string s , t;
    cin >> s >> t;
    int n = s.length();
    int m = t.length();
    int dp[n + 1][m + 1];

    memset(dp , 0 , sizeof(dp));
    // for(int i =0 ; i<=m; i++)
    // {
    //     dp[0][i] = 0;
    // }
    // for(int i =0 ; i<=n; i++)
    // {
    //     dp[i][0] = 0;
    // }
    int l = min(n , m);
    int index[l + 1];
    memset(index , -1 , sizeof(index));
    for(int i = 1 ; i <=n ; i ++)
    {
        for(int j = 1; j <= m ; j ++)
        {
            dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
            if(s[i - 1] == t[j - 1])
            {
                dp[i][j] = max(dp[i][j] , 1 + dp[i - 1][j - 1]);
                if(index[dp[i][j]] != -1)
                {
                    index[dp[i][j]] = min(index[dp[i][j]] , j - 1);
                }
                else
                index[dp[i][j]] = j - 1;
            }
        }
    }
    string ans = "";
    int i = n;
    int j = m;
    while( i>0 && j >0)
    {
        if(s[i - 1] == t[ j - 1])
        {
            ans += s[i - 1];
            i--;
            j--;
        }
        else
        {
            if(dp[i - 1][j] >= dp[i][j - 1])
            {
                i -= 1;
            }
            else
            j -= 1;
        }
    }
    reverse(ans.begin() , ans.end());
    cout << ans << endl;
}