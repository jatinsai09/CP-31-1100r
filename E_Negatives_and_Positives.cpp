#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        int sum = 0, c = 0, mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += abs(v[i]);
            mini = min(abs(v[i]), mini);
            if (v[i] <= 0) {
                c++;
            }
        }
        if (c & 1) {
            sum -= (2 * mini);
        }
        cout << sum << endl;

    }
}