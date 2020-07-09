#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
          ll x, y;
          cin >> x >> y;
          ll a = (y - 2* x)/ 2;
          ll b = x - a;
          if((y - 2* x) % 2 == 0 && y - 2 *x >= 0 && b>=0)
          cout << "Yes" << endl;
          else
          cout << "No" << endl;   
   }
}
