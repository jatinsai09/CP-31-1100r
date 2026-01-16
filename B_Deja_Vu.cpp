#include<bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < int > v(n), q(m);

        for (auto & it: v) {
            cin >> it;
        }
        for (auto & it: q) {
            cin >> it;
        }

        int mn = 31;
        for (int i = 0; i < m; ++i) {
            if (q[i] >= mn) continue;
            mn = q[i];
            int ex = q[i];
            for (int j = 0; j < n; ++j) {
                int d = pow(2, ex);
                if (v[j] % d == 0) {
                    int x = pow(2, ex - 1);
                    v[j] += x;
                }
            }
        }

        for (auto& it: v) {
            cout << it << " ";
        }
        cout << endl;
    }
}