#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > psum(n, 0);
        vector < pair < int, int >> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(), a.end());
        psum[0] = a[0].first;
        for (int i = 1; i < n; i++) {
            psum[i] = psum[i - 1] + a[i].first;
        }

        vector < int > res(n, -1);
        stack < int > st;
        for (int i = 0; i < n; i++) {
            st.push(a[i].second);
            if (i == n - 1 || psum[i] < a[i + 1].first) {
                while (!st.empty()) {
                    res[st.top()] = i;
                    st.pop();
                }
            }
        }

        for (auto& it: res) {
            cout << it << " ";
        }
        cout << endl;
    }
}