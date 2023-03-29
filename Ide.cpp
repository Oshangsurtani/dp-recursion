#include <iostream>
using namespace std;

const int MAX_N = 100;

int t, n;
int a[MAX_N];
int dp[MAX_N][2];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // Initialize dp array
        dp[0][0] = 0;
        dp[0][1] = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] % 2 == 0) {
                dp[i][0] = dp[i - 1][0];
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + 1;
            } else {
                dp[i][1] = dp[i - 1][1];
                dp[i][0] = min(dp[i - 1][1], dp[i - 1][0]) + 1;
            }
        }
        cout << min(dp[n - 1][0], dp[n - 1][1]) << endl;
    }
    return 0;
}
        
