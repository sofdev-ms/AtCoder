#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin t;
   while(t--){
    string s, t;
    cin >> s >> t;
    int len = s.length();
    int len1 = t.length();
    bool check = true;
    if(len1 != len + 1)
    check=false;
    for(int i =0 ;i < len; i ++)
    {
        if(i < len1 && s[i] != t[i])
        check = false;
    }         
    if(check)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
   }
}
