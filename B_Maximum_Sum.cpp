#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, sum = 0;
        cin >> n >> k;
        vector < int > v(n + 1), psum(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 1; i <= n; ++i) {
            sum += v[i];
            psum[i] = sum;
        }
        int maxi = INT_MIN;
        for (int i = 0; i <= k; ++i) {
            maxi = max(maxi, psum[n - i] - psum[2 * (k - i)]);
        }
        cout << maxi << endl;
    }
}