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
        sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            sum += v[i];
            psum[i] = sum;
        }
        int maxi = INT_MIN;
        for (int i = 1; i < n; i++) {
            maxi = max(maxi, __gcd(psum[i], psum[n] - psum[i]));
        }
        cout << maxi << "\n";
    }
}