// Source: https://usaco.guide/general/io
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;

    while (test_case--) {
        int len, x, k;
        cin >> len >> x >> k;

        vector<int> v(len);
        for (int i = 0; i < len; i++) cin >> v[i];

        sort(v.rbegin(), v.rend()); 

        for (int i = 0; i < k; i++) {
            v[i] = 0;
        }

        int m = x + (100 * k);
        int cnt = 0;

        for (int i = 0; i < len; i++) {
            if (m >= v[i]) cnt++;
        }

        if (cnt == len) cout << 1 << endl;
        else cout << len-cnt+1 << endl;
    }

    return 0;
}
