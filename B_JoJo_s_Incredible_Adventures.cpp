#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int mx = 0, c = 0, st = 0, e = 0, flag = 1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                c++;
            }
            else {
                if (flag) {
                    st = c;
                    flag = 0;
                }
                mx = max(c, mx);
                c = 0;
            }
        }
        mx = max(c, mx);
        e = c;
        mx = max(mx, st + e);

        if (flag) {
            cout << n * n << endl;
        }
        else {
            int r = (mx + 1) >> 1;
            int ans = (mx + 1 - r) * r;
            cout << ans << endl;
        }
    }
}