// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector < ll > a(n + 1), b(n + 1);
        for (ll i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        for (ll i = 1; i <= n; ++i)
        {
            cin >> b[i];
        }

        ll l = 1, r = n;
        while (a[l] == b[l]) {
            l++;
        }
        while (a[r] == b[r]) {
            r--;
        }

        while (l > 1 && b[l] >= b[l - 1]) {
            l--;
        }
        while (r < n && b[r] <= b[r + 1]) {
            r++;
        }

        cout << l << " " << r << endl;
    }
    return 0;
}