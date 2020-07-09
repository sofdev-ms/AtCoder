#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define MXN 200001
multiset<int, greater<int>> kind[MXN];
multiset<int> ans;
int main()
{
    ll t;
    t = 1;
    //cin t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll rating[n + 1];
        ll wkind[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> rating[i] >> wkind[i];
            kind[wkind[i]].insert(rating[i]);
        }
        for (int i = 1; i <= 200000; i++)
        {
            if(kind[i].size() > 0)
            ans.insert(*(kind[i].begin()));
        }

        for (int i = 0; i < q; i++)
        {
            int infant, newkind;
            cin >> infant >> newkind;
            int oldkind = wkind[infant];
            int rate = rating[infant];

            wkind[infant] = newkind;

            ans.erase(ans.find(*(kind[oldkind].begin())));
            if (kind[newkind].size() > 0)
                ans.erase(ans.find(*(kind[newkind].begin())));

            kind[oldkind].erase(kind[oldkind].find(rate));
            kind[newkind].insert(rate);

            ans.insert(*(kind[newkind].begin()));
            if (kind[oldkind].size() > 0)
                ans.insert(*(kind[oldkind].begin()));

            cout << *(ans.begin()) << endl;
        }
    }
}
