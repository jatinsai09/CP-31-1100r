#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        set < char > st;
        for (auto ch: s) {
            st.insert(ch);
        }
        int d = st.size();

        if (d == 1) {
            cout << "YES\n";
            continue;
        }

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (s[i] != s[i % d]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}