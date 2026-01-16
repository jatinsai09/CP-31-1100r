#include<bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, x, temp = 0;
        cin >> n >> x;
        
        bool flag = false;
        for (int i = 0; i < 3; i++) {
            vector< int > a(n);
            for (auto & it: a) {
                cin >> it;
            }

            for (int j = 0; j < n; j++) {
                if ((a[j] | x) == x) {
                    temp |= x;
                } else {
                    break;
                }
            }
            if (temp == x) {
                flag = true;
            }
        }

        if (x == 0) flag = true;
        if (flag) cout << "Yes\n";
        else cout << "No\n";
    }
}