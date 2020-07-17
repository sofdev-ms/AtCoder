#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 998244353

unsigned long long fac[200000 + 1];
long long power(unsigned long long x,
                int y, int p)
{
    unsigned long long res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
long long modInverse(unsigned long long n, int p)
{
    return power(n, p - 2, p);
}

long long ncr(unsigned long long n,
              int r, int p)
{
    if (r == 0)
        return 1;

    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int main()
{
    ll t;
    t = 1;
    //  cin t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll ans = m;
        ll sum = 0;
        fac[0] = 1;
        for (int i = 1; i <= n; i++)
            fac[i] = (fac[i - 1] * i) % mod;
        for (int i = 0; i <= k; i++)
        {
            sum = sum % mod + (ncr(n - 1, i, mod) % mod * power(m - 1, n - i - 1, mod) % mod) % mod;
            sum %= mod;
        }
        ans = (ans % mod * sum % mod) % mod;
        cout << ans << endl;
    }
}
