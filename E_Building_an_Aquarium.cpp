#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, avail;
        cin >> n >> avail;
        vector < int > v(n);
        for (auto & it: v) {
            cin >> it;
        }

        int l = 0, r = 1e10, mid, total;
        while (l <= r) {
            total = 0;
            mid = l + (r - l) / 2;
            
            for (int i = 0; i < n; i++) {
                if (mid > v[i]) {
                    total += (mid - v[i]);
                }
            }
            if (total > avail) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        cout << r << "\n";
    }
}