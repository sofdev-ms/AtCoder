#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    //cin t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> s;
        vector<pair<int, int>> v , v1;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            s.push_back(temp);
            int l = temp.length();
            int c1 = 0, c2 = 0;
            int a = 0, b = INT_MAX;

            for (int j = 0; j < l; j++)
            {
                if (temp[j] == '(')
                    c1++;
                else
                    c1--;
                a = min(a , c1);
            }
            if(c1 >=0 )
            v.push_back({ -a , c1});
            else
            v1.push_back({ -(a - c1) , -1 * c1});
            cout << -a << " " << -(a - c1) <<" "<< c1 << endl;

        }
        sort(v.begin() , v.end());
        sort(v1.begin() , v1.end());
        int x = 0 , y = 0;
        bool check = true;
        for(auto x1 : v)
        {
            if(x - x1.first < 0)
            check = false;

            x += x1.second;
        }

        for(auto x1 : v1)
        {
            if(y - x1.first < 0)
            check = false;

            y += x1.second;
        }
        
        if( x != y)
        check = false;

        if(check)
        cout << "Yes" << endl;
        else
        cout << "No" << endl;

    }
}
