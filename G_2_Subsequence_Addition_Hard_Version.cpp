#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, psum;
        cin >> n;
        vector < int > v(n);
        for (auto & i: v) {
            cin >> i;
        }
        sort(v.begin(), v.end());

        if (v[0] != 1) {
            cout << "NO\n";
        }
        else {
            int flag = 1;
            psum = v[0];
            for (int i = 1; i < n; i++) {
                if (v[i] > psum) {
                    flag = 0;
                    break;
                }
                psum += v[i];
            }
            if (flag) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
}