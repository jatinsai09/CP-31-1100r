#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i] = v[i] + i + 1;
        }
        int sum = 0;
        sort(v.begin(), v.end());
        int ans = n;

        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (sum > c) {
                ans = i;
                break;
            }
        }
        cout << ans << "\n";
    }

}