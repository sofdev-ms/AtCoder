#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
          ll n;
          cin >> n;
          ll x[n], y[n];
          for(int i = 0; i < n ; i ++)
          {
              cin >> x[i] >> y[i];
          }   
          sort(x , x + n);
          sort(y , y + n);
          if(n % 2 == 0)
          {
              cout << y[n / 2] + y[n /2 - 1] - x[n /2] - x[n /2 - 1] + 1 << endl;
          }
          else
          cout << y[n / 2] - x[n / 2] + 1 << endl;
   }
}
