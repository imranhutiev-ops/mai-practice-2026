#include <iostream>
using namespace std;
const int MOD = 1000000007;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    long long fact = 1;
    for (int i = 2; i <= n - 1; ++i)
        fact = fact * i % MOD;
    long long inv2 = (MOD + 1) / 2;
    cout << fact * inv2 % MOD << '\n';
}
