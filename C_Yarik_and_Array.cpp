#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum, maxi, par = 0;
        cin >> n;
        vector < int > v(n);
        cin >> v[0];
        par = abs(v[0]) % 2;
        sum = v[0];
        maxi = v[0];

        for (int i = 1; i < n; ++i) {
            cin >> v[i];
            if (abs(v[i]) % 2 != par) {
                sum += v[i];
            }
            else {
                sum = v[i];
            }
            if (v[i] > sum) {
                sum = v[i];
            }
            par = abs(v[i]) % 2;
            maxi = max(sum, maxi);
        }
        cout << maxi << endl;
    }

}