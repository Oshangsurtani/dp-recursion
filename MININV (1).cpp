#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t; cin >> t; while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto& ai : a) {
      cin >> ai;
    }

    vector<int> pcnt(n + 2), scnt(n + 1);
    for (const auto ai : a) {
      ++scnt[ai];
    }
    
    int64_t inv = 0, maxinv = 0;
    for (const auto ai : a) {
      inv += scnt[ai-1];
      --scnt[ai];
      inv -= pcnt[ai+1];
      ++pcnt[ai];
      maxinv = max(maxinv, inv);
    }
    
    cout << maxinv << "\n";
  }

  return 0;
}
