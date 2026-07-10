#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    int n;
    std::cin >> n;
 
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
 
    std::sort(a.begin(), a.end());
 
    long long ans = 0;
 
    for (int i = 0; i < n - 2; ++i) {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; ++j) {
            while (k < n && a[i] + a[j] > a[k]) {
                ++k;
            }
            ans += k - j - 1;
        }
    }
 
    std::cout << ans << '\n';
 
    return 0;
}
