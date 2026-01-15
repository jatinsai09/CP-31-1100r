#include<bits/stdc++.h>

using namespace std;
#define ll long long int

void answer() {
    ll n, k;
    cin >> n >> k;
    vector < ll > a(n), b(n), suma(n), maxb(n);
    cin >> a[0];
    suma[0] = a[0];
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        suma[i] = suma[i - 1] + a[i];
    }

    cin >> b[0];
    maxb[0] = b[0];
    for (int i = 1; i < n; ++i) {
        cin >> b[i];
        maxb[i] = max(maxb[i - 1], b[i]);
    }

    ll res = INT_MIN;
    for (int i = 0; i < n; ++i) {
        res = max(res, suma[i] + (k - i - 1) * maxb[i]);
        if (i == k - 1) {
            break;
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        answer();
    }

}