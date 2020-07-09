#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int c[1000001] = {0};
int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
             ll n;
             cin >> n;
             ll a[n];
             for(int i =0 ; i < n ; i ++ )
             {
                 cin >> a[i];
             }
             sort(a , a + n);
             int ans = 0;
             
             for(int i = 0; i < n ; i ++)
             {
                 
                 if(c[a[i]] == 1)
                 continue;

                    
                 ans ++;
                 if(i + 1 < n && a[i + 1] == a[i])
                 ans --;

                 c[a[i]] = 1;
                 for(int j = a[i] * 2; j <= a[n- 1] ; j += a[i])
                 c[j] = 1;
             }
             cout << ans << endl;
   }
}
