#include<bits/stdc++.h>
using namespace std;
int main() {
 	string str; cin >> str;
 	int sz = str.size();
    string ans = "";
 	for (int i = 0; i < sz; i++) {
 		if (str[i] == '-' && str[i + 1] == '-') {
     		ans += "2";
     		i++;
 		}
 		else if(str[i] == '-' && str[i + 1] == '.') {
 			ans += "1";
 			i++;
 		}
 		else {
 			ans += "0";
 		}
 	}
 	cout << ans << endl;
	return 0;
}
