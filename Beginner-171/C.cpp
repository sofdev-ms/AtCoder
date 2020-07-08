#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin t;
   while(t--){
    ll n;
    cin >> n;
    ll x = 1;
    ll total = 0;
    int l = 0;
    vector< ll > p;
    while(total < n)
    {
        x *= 26;
        total += x;
        p.push_back(x);
        l++;
    }
    string ans = "";
    int size = p.size() - 1;
    size --;
    total -= x;
    n = n - total;
    n--;
    for(int i = 0 ; i < l - 1 ; i ++)
    {
        
        int x = n / p[size];
        n = n % p[size --];
        ans += (char)('a' + x);
    }
    ans += (char)('a' + n);
    cout << ans << endl;




   }
}
