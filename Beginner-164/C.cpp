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
        map < string ,  bool > m;
        int ans = 0;
        for(int i = 0 ; i < n; i ++)
        {
            string s;
            cin >> s;
            if(!m[s])
            {
                m[s] = true;
                ans ++;
            }
        }     
        cout << ans << endl;
   }
}
