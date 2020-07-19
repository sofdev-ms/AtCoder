#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin >> t;
   while(t--){
          ll x;
          cin >> x;
          int count = 0;
          ll total = 100;
          while(total < x)
          {
              total += total / 100;
              count ++;
          }   
          cout << count << endl;
   }
}
