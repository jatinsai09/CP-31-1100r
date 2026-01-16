#include<bits/stdc++.h>

using namespace std;

#define ll long long int
int32_t main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        vector < ll > x(n + 1), y(n + 1);
        for (ll i = 1; i <= n; ++i) {
            cin >> x[i] >> y[i];
        }
        ll price, a_major = LLONG_MAX / 2, b_major = LLONG_MAX / 2;
        price = abs(x[a] - x[b]) + abs(y[a] - y[b]);

        for (ll i = 1; i <= k; i++) {
            a_major = min(a_major, abs(x[a] - x[i]) + abs(y[a] - y[i]));
            b_major = min(b_major, abs(x[b] - x[i]) + abs(y[b] - y[i]));
        }
        cout << min(price, a_major + b_major) << endl;
    }
}