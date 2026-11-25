// Problem: YMISN01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/YMISN01
// Solved on: 2026-11-25T11:30:47.721Z

class Solution {
public:
    long long ways(int idx,int totalSteps,vector<long long>&dp){
        if(idx>totalSteps){
            return 0;
        }
        if(idx==totalSteps){
            return 1;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        return dp[idx]=ways(idx+1,totalSteps,dp)+ways(idx+2,totalSteps,dp);
    }
    long long calculateWaysToClimb(int totalSteps) {
        vector<long long>dp(totalSteps+1,-1);
       return ways(0,totalSteps,dp);
        
    }
};
