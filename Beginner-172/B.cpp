#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
//    cin t;
   while(t--){
       string s , t;
       cin >> s >> t;
       int l = s.length();
       int ans = 0;
       for(int i = 0 ; i < l ; i ++)
       {
           if(s[i] != t[i])
           ans ++;
       }      
       cout << ans << endl;
   }
}
