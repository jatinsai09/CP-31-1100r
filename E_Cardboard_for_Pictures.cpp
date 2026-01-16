#include<bits/stdc++.h>

using namespace std;

#define ll long long int
ll c;

int f(ll w, vector < ll > & v) {
    ll sum = 0;
    w = w * 2;
    for (auto & i: v) {
        sum += ((i + w) * (i + w));
        if (sum > c) return 1;
    }
    if (sum == c) return 0;
    return -1;
}

void solve() {
    ll n;
    cin >> n >> c;
    vector < ll > v(n);
    for (auto & it: v) {
        cin >> it;
    }
    ll l = 1, r = 1e9, w;
    while (l <= r) {
        w = l + (r - l) / 2;
        int k = f(w, v);
        if (k == 1) r = w - 1;
        else if (k == -1) l = w + 1;
        else {
            cout << w << "\n";
            return;
        }

    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}