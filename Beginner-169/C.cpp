#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
 //  cin t;
   while(t--){
       long double a,b;
       cin >> a >> b;
       ll C = b * 100 + 0.01;

       cout << (long long int) (a * C)/ 100 << endl;      
   }
}
