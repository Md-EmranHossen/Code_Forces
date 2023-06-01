#include<bits/stdc++.h>
using namespace std;
int arr[102];
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tst; cin >> tst;
    int index;
    while (tst--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        if (arr[1] != arr[n]) {
            if (arr[1] != arr[2]) {
                index = 1;
            }
            else index = n;
        }
        else {
            for (int i = 2; i < n; i++) {
                if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1] ) {
                    index = i;
                }
            }
        }
        cout << index << '\n';
    }
    return 0;
}
