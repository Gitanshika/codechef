// Problem: PEC005
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/PEC005
// Solved on: 2026-11-26T06:37:08.751Z

#include <bits/stdc++.h>
using namespace std;

int solve(int i, int prev, vector<int>& nums,
          vector<vector<int>>& dp) {

    if(i == nums.size()) return 0;

    if(dp[i][prev+1] != -1)
        return dp[i][prev+1];

    int skip = solve(i+1, prev, nums, dp);

    int take = 0;

    if(prev == -1 || nums[i] > nums[prev]) {
        take = 1 + solve(i+1, i, nums, dp);
    }

    return dp[i][prev+1] = max(take, skip);
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        vector<vector<int>> dp(n, vector<int>(n+1, -1));

        cout << solve(0, -1, arr, dp) << endl;
    }

    return 0;
}