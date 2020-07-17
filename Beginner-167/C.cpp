#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll ans = INT_MAX;
int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
        ll n, m ,x;
        cin >> n >> m >> x;
        ll cost[n];
        ll value[n][m];
        for(int i = 0 ; i< n ; i ++)
        {   cin >> cost[i];
            for(int j =0 ; j < m;  j++)
            {
                cin >> value[i][j];
            }
        } 
        ll present = 0; 
     //   cout << (1 << n) << endl;
        for(int i = 0; i < (1 << n) ; i ++)
        {
            present = 0;
            ll total[m];
            for(int i1 =0 ; i1 < m ;i1  ++)
            total[i1] = 0;
            ll count =0 ;
            for(int j =0 ; j < n ; j ++)
            {
                ll temp = 1 << j;
                if(i & temp)
                {   
                    present += cost[j];
                    for(int k =0 ; k < m;k ++)
                    {
                        total[k] += value[j][k];
                    }
                }
            }
            for(int j = 0; j < m ;j ++)
            {
                
                if(total[j] >= x)
                count ++;
            }
        
            if(count == m)
            {
                ans = min(ans , present);
            }
        }
        if(ans == INT_MAX)
        cout << "-1" << endl;
        else
        cout << ans << endl;
   }
}
