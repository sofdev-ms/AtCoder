#include<bits/stdc++.h>

using namespace std;


int main() {
	int n;
	vector<int> v(3, 0);
	cin >> n >> v[0] >> v[1] >> v[2];
	vector<string> vs(n, "");
	for (int i = 0; i < n; i++) {
		cin >> vs[i];
	}
	string res;
	for (int i = 0; i < n; i++) {
		if (v[0] < 0 || v[1] < 0 || v[2] < 0) {
			cout << "No" << endl;
			return 0;
		}
		int i1 = vs[i][0] - 'A', i2 = vs[i][1] - 'A';
		if (v[i1] == 0) {
			v[i1] += 1;
			v[i2] -= 1;
			res.push_back('A' + i1);
		} else if (v[i2] == 0) {
			v[i1] -= 1;
			v[i2] += 1;
			res.push_back('A' + i2);
		} else if (v[i1] == 1 && v[i2] == 1 && i + 1 < n && vs[i + 1] != vs[i]) {
			int next_i1 = vs[i + 1][0] - 'A', next_i2 = vs[i + 1][1] - 'A';
			bool incre_i1 = true;
			if (i1 != next_i1 && i1 != next_i2) {
				if (next_i1 == i2) {
					if (v[next_i2] == 0) incre_i1 = false;
				} else {
					if (v[next_i1] == 0) incre_i1 = false;
				}
			} else {
				if (next_i1 == i1) {
					if (v[next_i2] > 0) incre_i1 = false;
				} else {
					if (v[next_i1] > 0) incre_i1 = false;
				}
			}
			if (incre_i1) {
				v[i1]++;
				v[i2]--;
				res.push_back('A' + i1);
			} else {
				v[i1]--;
				v[i2]++;
				res.push_back('A' + i2);
			}
		} else {
			if (v[i1] < v[i2]) {
				v[i1] += 1;
				v[i2] -= 1;
				res.push_back('A' + i1);
			} else {
				v[i1] -= 1;
				v[i2] += 1;
				res.push_back('A' + i2);
			}
			
		}
	}
	if (v[0] < 0 || v[1] < 0 || v[2] < 0) {
			cout << "No" << endl;
			return 0;
		}
	cout << "Yes" << endl;
	for (auto r : res) cout << r << endl;
}
