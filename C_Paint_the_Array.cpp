#include<bits/stdc++.h>

using namespace std;
#define int long long int

int solve() {
    int n;
    cin >> n;
    vector < int > v(n);
    for (auto & i: v) {
        cin >> i;
    }
    int v1 = 0, v2 = 0;

    for (int i = 0; i < n; i += 2) v1 = __gcd(v1, v[i]);
    for (int i = 1; i < n; i += 2) v2 = __gcd(v2, v[i]);

    bool ok = true;
    for (int i = 0; i < n; i += 2) {
        if (v[i] % v2 == 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        return v2;
    }

    ok = true;
    for (int i = 1; i < n; i += 2) {
        if (v[i] % v1 == 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        return v1;
    }

    return 0;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int ans = solve();
        cout << ans << "\n";
    }
}