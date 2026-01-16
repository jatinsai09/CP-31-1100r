#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int mod = 1000000007;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n), b(n);
        for (auto & i: a) cin >> i;
        for (auto & i: b) cin >> i;

        vector < int > res(n);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < n && a[j] <= b[i]) {
                j++;
            }
            res[i] = n - j;
        }
        sort(res.begin(), res.end());

        int maxi = 1;
        for (int i = 0; i < n; i++) {
            maxi = ((maxi % mod) * ((res[i] - i) % mod)) % mod;
        }
        cout << maxi << endl;
    }
}