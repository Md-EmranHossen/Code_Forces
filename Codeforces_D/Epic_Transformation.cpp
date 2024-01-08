//https://codeforces.com/problemset/problem/1506/D
#include<bits/stdc++.h>
using namespace std;
int main() {
	int tst; cin >> tst;
	while(tst--) {
		int n; cin >> n;
	    vector < int > v(n);
        for (int i = 0; i < n; i++) {
        	cin >> v[i];
        }
	    map < int , int > frequency;
	    for (int i = 0; i < n; i++) {
        	frequency[v[i]]++;
	    }
	    priority_queue <pair<int, int>> pq;
	    for (auto [x,y] : frequency) {
	    	pq.push(make_pair(y,x));
	    }
        int alive = n;
	    while(pq.size() > 1) {
	    	auto pair1 = pq.top();
	    	pq.pop();
	    	auto pair2 = pq.top();
	    	pq.pop();
	    	auto[cnt1,value1] = pair1;
	    	auto[cnt2,value2] = pair2;
	    	cnt1--;
	    	cnt2--;
	    	alive-= 2;
	    	if (cnt1 > 0)pq.push(make_pair(cnt1,value1));
	    	if (cnt2 > 0)pq.push(make_pair(cnt2,value2));
	    }
        cout << alive << endl;
	}
	return 0;
}