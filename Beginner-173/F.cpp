#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin >> t;
   while(t--){
      ll n;
      cin >> n;
      ll sum = 0;
      for(int i = 1; i <= n ; i++)
      {
          sum += i * (n - i + 1);
      }
      for(int i = 0; i < n -1 ; i ++)
      {
          int x , y;
          cin >> x >> y;

          sum -= (min(x , y)) * (n - max(y,x) + 1);
      }
      cout << sum << endl;
   }
}
