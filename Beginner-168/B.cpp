#include <bits/stdc++.h>

using namespace std;
#define ll long long int

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
        if (s.length() <= k)
            cout << s << endl;
        else
        {
            string ans = "";
            for (int i = 0; i < k; i++)
                ans += s[i];
            cout << ans << "..." << endl;
        }
    }
}
