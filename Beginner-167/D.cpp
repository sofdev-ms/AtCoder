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
      ll n, k;
      cin >> n >> k;
      vector<int> temp;
      temp.push_back(1);
      temp.push_back(1);
      ll a[n + 1];
      int visited[n + 1];
      for (int i = 1; i <= n; i++)
      {
         cin >> a[i];
         visited[i] = 0;
      }
      int start = 1;
      int count = 1;
      visited[1] = 1;
      while(visited[a[start]] == 0)
      {
         start = a[start];
         count++;
         visited[start] = count;
         temp.push_back(start);
      }
      int end = a[start];
      count -= (visited[end] - 1);
      
      if(k < visited[end])
      {
         cout << temp[k + 1] << endl;
      }
      else
      {
         cout << temp[visited[end] + ( k - visited[end] + 1 ) % count] << endl;
      }
      
   }
}
