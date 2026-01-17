#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int c = 0, i = n - 1, steps = 0;
        while (i >= 0) {
            while (i >= 0 && a[i] == a[n - 1]) {
                c++;
                i--;
            }
            if (i < 0) break;

            steps++;
            i -= c;
            c <<= 1;
        }

        cout << steps << "\n";
    }
    return 0;
}