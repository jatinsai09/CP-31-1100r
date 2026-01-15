#include<bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set < char > st;
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (st.find(s[i]) == st.end()) {
                res += (n - i);
                st.insert(s[i]);
            }
        }
        cout << res << "\n";
    }
}