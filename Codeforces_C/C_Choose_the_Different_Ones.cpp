#include<bits/stdc++.h>
using namespace std;
int main() {
 	int t; cin >> t;
 	while(t--) {
 		int n,m,k;
 		cin >> n >> m >> k;
 		set < int > s1,s2,s3;
 		for (int i = 0; i < n; i++) {
 			int x; cin >> x;
 			if(x <= k){
 			s3.insert(x);
 			s1.insert(x);	
 			}
 		}
 		for (int i = 0; i < m; i++) {
 			int x; cin >> x;
 			if(x <= k){
 			s3.insert(x);
 			s2.insert(x);
 			}
 		}
 	    if(s1.size() >=(k /2) && s2.size() >= (k/2) && s3.size() == k) {
 	    	cout << "YES" << endl;
 	    }
 	    else cout << "NO" << endl;
 	}
	return 0;
}