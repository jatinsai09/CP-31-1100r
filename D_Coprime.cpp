#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n;
        vector < int > v(1001, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a;
            v[a] = i;
        }

        int maxi = -1;

        for (int i = 1; i <= 1000; i++) {
            for (int j = i; j <= 1000; j++) {
                if (v[i] && v[j] && __gcd(i, j) == 1) {
                    maxi = max(maxi, v[i] + v[j]);
                }
            }
        }
        cout << maxi << "\n";
    }
}