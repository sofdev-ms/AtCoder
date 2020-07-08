#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007
long long power(long long x,
                int y, int p)
{
   long long res = 1;
   x = x % p; 

   while (y > 0)
   {
      if (y & 1)
         res = (res * x) % p;
      y = y >> 1; // y = y/2
      x = (x * x) % p;
   }
   return res;
}

long long modInverse(long long n, int p)
{
   return power(n, p - 2, p);
}



int main()
{
   ll t;
   t = 1;
   // cin t;
   while (t--)
   {
      ll k;
      cin >> k;
      string s;
      cin >> s;
      int l = s.length();
      ll ans = 0;
      ll p25[k + 1];
      ll p26[ k + 1];
      p25[0] = 1;
      p26[0] = 1;
      ll ncr[k + 1];
      ncr[0] = 1;
      for(int i = 1 ; i<=k ; i ++)
      {
         ncr[i] = (ncr[i - 1] * (l - 1 + i) % mod * modInverse(i, mod) % mod) % mod;
      }
      for(int i = 0 ; i <= k ; i ++)
      {
         ans = (ans +  (power(25 , k - i ,mod) % mod * power(26 , i ,mod)  % mod * ncr[k - i] % mod) % mod ) % mod;
      }
      cout << ans<< endl;
   }
}
