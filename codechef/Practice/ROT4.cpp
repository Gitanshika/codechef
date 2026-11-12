// Problem: ROT4
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/START264D/problems/ROT4
// Solved on: 2026-11-12T03:52:57.394Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = 0;

        if (n == 1) {
            if ((s[0] - '0') % 4 == 0) {
                cnt++;
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                int num = (s[i] - '0') * 10 + (s[(i + 1) % n] - '0');

                if (num % 4 == 0) {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}