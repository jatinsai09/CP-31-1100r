#include<bits/stdc++.h>

using namespace std;

#define int long long int

bool answer(vector < int > v, int x) {
    int i = 0, j = v.size() - 1;
    while (i < j) {
        if (v[i] == x) {
            i++;
            continue;
        }
        if (v[j] == x) {
            j--;
            continue;
        }

        if (v[i] != v[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (auto & i: v) {
            cin >> i;
        }

        int i = 0, j = n - 1;
        bool res = true;
        while (i < j) {
            if (v[i] != v[j]) {
                res = answer(v, v[i]) || answer(v, v[j]);
                break;
            }
            i++;
            j--;
        }

        if (res) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}