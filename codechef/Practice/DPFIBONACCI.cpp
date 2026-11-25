// Problem: DPFIBONACCI
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/DPFIBONACCI?tab=statement
// Solved on: 2026-11-25T16:41:38.253Z

#include <iostream>
#include <vector>
using namespace std;

long long solve(int idx, vector<long long>& dp) {
    if(idx == 1) return 0;
    if(idx==2) return 1;

    if(dp[idx] != -1) return dp[idx];

    return dp[idx] = solve(idx-1,dp) + solve(idx-2,dp);
}

long long fib(int n) {
    vector<long long> dp(n+1,-1);
    return solve(n,dp);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}