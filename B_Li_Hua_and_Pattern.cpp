#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, g;
        cin >> n >> g;
        int a[n][n];
        for (auto & r: a) {
            for (auto & i: r) {
                cin >> i;
            }
        }
        int c = 0;
        int i = 0, j = n - 1;
        while (i < j) {
            int m = 0, p = n - 1;
            while (p >= 0) {
                if (a[i][m] != a[j][p]) {
                    c++;
                }
                m++;
                p--;
            }
            i++;
            j--;
        }
        if (i == j) {
            int m = 0, p = n - 1;
            while (m < p) {
                if (a[i][m] != a[j][p]) {
                    c++;
                }
                m++;
                p--;
            }
        }
        if (c <= g) {
            int rem = g - c;
            if (n & 1) {
                cout << "YES\n";
            }
            else if (rem & 1) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
            }
        }
        else {
            cout << "NO\n";
        }
    }


    return 0;
}