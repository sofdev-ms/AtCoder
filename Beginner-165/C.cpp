#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll a[50] , b[50] , c[50] , d[50]; 
ll n , m , q;
ll ans = 0;

void find(int start , int end , int temp[] , int index)
{
    if(index == n)
    {
        ll total = 0;
        for(int i = 0; i <q ; i ++)
        {
            if(temp[b[i] - 1] - temp[a[i] - 1] == c[i])
            total += d[i];
        }
        ans = max(total ,ans);
        return ;
    }
    for(int i = start ; i <= end ; i ++)
    {
        temp[index] = i;
        find(i , end , temp , index + 1);
    }

}
int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
        cin >> n >> m >> q;
        
        for(int i =0 ; i <q  ; i ++)
        cin >> a[i] >> b[i] >> c[i] >> d[i];

        int temp[n] = {0};
        find(1 , m , temp , 0);
        cout << ans << endl;
   }
}
