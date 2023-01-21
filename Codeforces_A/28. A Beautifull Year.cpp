#include <bits/stdc++.h>

using namespace std;

int unique(int n) {
  int arr[10] = {
    0
  }, t = 4;
  while (t--) {
    if (arr[n % 10] == 1) return 0;
    else arr[n % 10] = 1;
    n /= 10;
  }
  return 1;
}
int main() {
  int n;
  cin >> n;
  for (int i = n + 1;; i++) {
    if (unique(i) == 1) {
      cout << i;
      break;
    }
  }
  return 0;
}
