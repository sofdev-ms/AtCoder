#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
  	cin >> n;
  	n = n % 1000;
  	if(n == 0)
      cout << n << endl;
  else
    cout << 1000-n << endl;

}
