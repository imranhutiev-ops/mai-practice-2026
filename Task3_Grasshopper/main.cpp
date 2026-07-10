#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int l, r;
    if (!(cin >> l >> r)) return 0;
 
    const int MOD = 1e9 + 7;
    vector<int> dp(r + 1, 0);
    dp[1] = 1;
 
    for (int i = 1; i <= r; ++i) {
        if (dp[i] == 0) continue;
        
        for (int j = 2 * i; j <= r; j += i) {
            dp[j] = (dp[j] + dp[i]) % MOD;
        }
    }
 
    long long total_paths = 0;
    for (int i = l; i <= r; ++i) {
        total_paths = (total_paths + dp[i]) % MOD;
    }
 
    cout << total_paths << "\n";
 
    return 0;
}
