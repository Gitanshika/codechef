// Problem: NGEXK01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/NGEXK01
// Solved on: 2026-11-26T07:13:59.439Z

int lcs(int i, int j, string &s1, string &s2,
        vector<vector<int>>& dp) {

    if(i == s1.size() || j == s2.size()) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    if(s1[i] == s2[j]) {
        return dp[i][j] = 1 + lcs(i+1, j+1, s1, s2, dp);
    }

    return dp[i][j] = max(
        lcs(i+1, j, s1, s2, dp),
        lcs(i, j+1, s1, s2, dp)
    );
}

long long calculateMinInsertions(string inputText) {

    string rev = inputText;
    reverse(rev.begin(), rev.end());

    int n = inputText.size();

    vector<vector<int>> dp(n, vector<int>(n, -1));

    int lps = lcs(0, 0, inputText, rev, dp);

    return n - lps;
}