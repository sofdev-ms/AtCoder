#include<bits/stdc++.h>

using namespace std;
#define ll long long int

bool find(int x , ll a1[], ll b1[] , int n , int m, int k)
{
    // cout << x << endl;
    for(int i = 0 ; i <= x ; i ++)
    {
        int j = x - i;
        if( i <=n && j <= m)
        {
            ll total = a1[i] + b1[j];
            // cout << x << " " << total << endl;
            if(k >= total)
            return true;
        }        

    }
    return false;
}

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
      ll n,m,k;
      cin >> n >> m >>k;
      ll a[n] , b[m]; 
      ll a1[n + 1] , b1[m + 1];
      a1[0] = 0;
      b1[0] = 0;
      for(int i = 0; i < n ; i ++)
      {
          cin >> a[i];
          a1[i + 1] = a1[i] + a[i];
      } 
      for(int i = 0; i < m ; i ++)
      {
          cin >> b[i];
          b1[i + 1] = b1[i] + b[i];
      }        
      int ans = 0;   
      int l = 0;
      int r = n + m;
      while(l <= r)
      {
          int mid = l + (r - l) / 2;
          if(find(mid,  a1 , b1 , n , m , k))
          { 
              ans = mid;
              l = mid + 1;
          }
          else
          r= mid - 1;
      }
      cout << ans << endl;
   }
}
