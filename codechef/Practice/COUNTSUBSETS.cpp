// Problem: COUNTSUBSETS
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/COUNTSUBSETS
// Solved on: 2026-11-25T18:37:15.627Z

class Solution {
public:
    int issubarr(int idx,int target,vector<int>&arr,vector<vector<int>>&dp){

        if(target==0) return 1;

        if(idx==arr.size()) return 0;

        if(dp[idx][target]!=-1) return dp[idx][target];

        int skip=issubarr(idx+1,target,arr,dp);

        int take=0;
        if(target>=arr[idx]){
            take=issubarr(idx+1,target-arr[idx],arr,dp);
        }

        return dp[idx][target]=skip+take;
    }

    int countSubsetsWithSumK(int n,int K,vector<int>&arr){
        vector<vector<int>>dp(n,vector<int>(K+1,-1));

        return issubarr(0,K,arr,dp);
    }
};