#include<bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum;
        cin >> n;
        vector < int > v(n + 1), psum(n + 1);
        sum = v[0] = 0;

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            sum += v[i];
            psum[i] = sum;;
        }
        int res = INT_MIN;
        for (int i = 1; i <= n; ++i) {
            int mn = 1e18, mx = -1e18;
            if (n % i == 0) {
                int sz = n / i;
                for (int k = i; k <= n; k += i) {
                    int w = psum[k] - psum[k - i];
                    mn = min(mn, w);
                    mx = max(mx, w);
                }
            
                res = max(res, mx - mn);
            }
        }
        cout << res << endl;
    }
}