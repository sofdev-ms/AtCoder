#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
        ll a  , b, c , d;
        cin >> a >> b >> c >> d;
        
        ll x = (a - 1 + d) / d;
        ll y = (c - 1 + b) / b;
        if(y <= x)
        cout << "Yes" << endl;
        else
        cout << "No" << endl;     
   }
}
