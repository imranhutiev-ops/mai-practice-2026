#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
 
        unordered_map<long long, int> last;
        int l = 0, ans = 0;
 
        for (int r = 0; r < n; ++r) {
            if (last.count(a[r])) {
                l = max(l, last[a[r]] + 1);
            }
            last[a[r]] = r;
            ans = max(ans, r - l + 1);
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}
