#include<bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, x, temp = 0;
        cin >> n >> x;
        
        for (int i = 0; i < 3; i++) {
            vector< int > a(n);
            for (auto & it: a) {
                cin >> it;
            }

            for (int j = 0; j < n; j++) {
                if ((a[j] | x) != x) {
                    break;
                }
                temp |= a[j];
            }
        }

        if (temp == x) cout << "Yes\n";
        else cout << "No\n";
    }
}
