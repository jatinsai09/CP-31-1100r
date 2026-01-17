#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector < int > v(n + 1);
    unordered_map < int, int > mp;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (mp[v[i]] == 0) {
            mp[v[i]] = i;
        }
    }
    while (q--) {
        int t;
        cin >> t;
        int res = mp[t];
        mp.erase(t);
        cout << res << " ";
        for (auto& it: mp) {
            int f = it.first, s = it.second;
            if (s < res) {
                mp[f] = s + 1;
            }
        }
        mp[t] = 1;
    }
    return 0;
}