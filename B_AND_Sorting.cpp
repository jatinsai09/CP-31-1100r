#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        int res = (1 << 21) - 1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i != v[i]) {
                res = res & v[i];
            }
        }
        cout << res << "\n";
    }
    return 0;
}