#include<bits/stdc++.h>
using namespace std;
int main() {
 	int n; cin >> n;
 	vector < int > v;
 	for (int i = 0; i < n; i++) {
 		int x; cin >> x;
 		v.push_back(x);
 	}
 	int x = *max_element(v.begin(), v.end());
 	int ans = 0;
 	for (auto k : v) {
 		ans += x - k;
 	}
 	cout << ans;
	return 0;
}