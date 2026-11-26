// Problem: NGEXK01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/NGEXK01
// Solved on: 2026-11-26T07:15:33.994Z

int calculateMinInsertions(string inputText) {
    int n = inputText.size();

    string rev = inputText;
    reverse(rev.begin(), rev.end());

    vector<int> dp(n+1, 0);

    for(int i = 1; i <= n; i++) {
        int prev = 0;

        for(int j = 1; j <= n; j++) {
            int temp = dp[j];

            if(inputText[i-1] == rev[j-1]) {
                dp[j] = 1 + prev;
            }
            else {
                dp[j] = max(dp[j], dp[j-1]);
            }

            prev = temp;
        }
    }

    return n - dp[n];
}