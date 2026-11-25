// Problem: EIHKO01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/EIHKO01
// Solved on: 2026-11-25T16:48:37.140Z

class Solution {
public:
    long long solve(int rowCount,int columnCount,vector<vector<long long>>&dp){
        if(rowCount<=0 || columnCount<=0){
            return 0;
        }
        if(rowCount==1 || columnCount==1){
            return 1;
        }
        if(dp[rowCount][columnCount]!=-1) return dp[rowCount][columnCount];
        return dp[rowCount][columnCount]= solve(rowCount-1,columnCount,dp)+solve(rowCount,columnCount-1,dp);
    }
    long long calculateUniquePaths(int rowCount, int columnCount) {
        vector<vector<long long>>dp(rowCount+1,vector<long long>(columnCount+1,-1));
        return solve(rowCount,columnCount,dp);
        
    }
};
