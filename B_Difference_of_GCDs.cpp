#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector < int > v;
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            int q = (l / i) + (l % i != 0);
            int el = i * q;

            if (el > r) {
                ok = false;
                break;
            }
            v.push_back(el);
        }
        if (ok) {
            cout << "YES\n";
            for (auto i: v) {
                cout << i << " ";
            }
            cout << endl;
        }
        else {
            cout << "NO\n";
        }
    }
}