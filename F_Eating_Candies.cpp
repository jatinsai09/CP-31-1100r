#include<bits/stdc++.h>

using namespace std;
#define int long long int

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
        
        int i = 0, j = n - 1, sum1 = 0, sum2 = 0, res = 0;
        while (i <= j) {
            if (sum1 <= sum2) {
                sum1 += v[i++];
            }
            else {
                sum2 += v[j--];
            }
            if (sum1 == sum2) {
                res = max(res, i + (n - j - 1));
            }
        }
        cout << res << "\n";
    }
    return 0;
}