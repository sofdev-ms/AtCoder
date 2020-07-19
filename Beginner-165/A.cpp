#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin t;
   while(t--){
            ll x;
            cin >> x;
            ll a , b;
            cin >> a >> b;
            for(int i = a ; i <= b ; i ++)
            {
                if(i % x == 0)
                {cout << "OK" << endl;return 0;}
            } 
            cout << "NG" << endl;
   }
}
