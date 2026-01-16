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
        vector < ll > v(n);
        for (auto & i: v) {
            cin >> i;
        }
        vector < ll > r;
        ll i = 0, j = n - 1;
        while (i < j) {
            ll num = abs(v[i] - v[j]);
            r.push_back(num);
            i++;
            j--;
        }
        ll g = 0;
        for (int i = 0; i < r.size(); i++) {
            g = __gcd(g, r[i]);
        }
        cout << g << endl;
    }
    return 0;
}