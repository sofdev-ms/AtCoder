#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
         ll a , b , x;
         cin >> a >> b >> x;
         cout << floor(a * min( b - 1, x) * 1.0 / b) << endl;    
   }
}
