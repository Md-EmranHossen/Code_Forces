#include<bits/stdc++.h>
using namespace std;

int32_t main() {
 	int t; cin >> t;
 	string str;
 	str = "abcdefghijklmnopqrstuvwxyz";
 	while(t--) {
 	   int n; cin >> n;
 	   map <char, int> mp;
 	   for (int i = 0; i < str.size(); i++) mp[str[i]] = 0;
 		vector<int>v(n);
 		for (int i = 0; i < n; i++) {
 			cin >> v[i];
 			for (auto [x,y] : mp){
 				if(y == v[i]) {
 					cout << x;
 					mp[x]++;
 					break;
 				}
 			}
 		}
 		cout << '\n';
 	}
	return 0;
}