#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    if (!(cin >> t)) return 0;
 
    while (t--) {
        int n;
        cin >> n;
 
        int a[1005];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int swaps = 0;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    swaps++;
                }
            }
        }
 
        cout << swaps << "\n";
    }
 
    return 0;
}
