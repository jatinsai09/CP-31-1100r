#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        bool ok = false;
        for (int i = 0; i < n; i++) {
            int key = a[i] + k;
            if (binary_search(a + i + 1, a + n, key)) {
                ok = true;
                cout << "YES\n";
                break;
            }
        }
        if (!ok) {
            cout << "NO\n";
        }
    }
    return 0;
}