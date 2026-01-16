#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int mod = 1000000007;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int res = 4 * (n * n) + 3 * n - 1;
        res %= mod;

        res *= n;
        res %= mod;

        cout << (res * 337) % mod << "\n";
    }
}