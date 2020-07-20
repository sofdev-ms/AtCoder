#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
       ll s , w;
       cin >> s >> w;
       if(w >= s)
       cout << "unsafe" << endl;
       else
       cout << "safe" << endl;      
   }
}
