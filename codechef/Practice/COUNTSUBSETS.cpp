// Problem: COUNTSUBSETS
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/COUNTSUBSETS
// Solved on: 2026-11-25T18:33:24.952Z

class Solution {
public:
     bool issubarr(int idx,int target,vector<int>&arr,vector<vector<int>>&dp){
        if(target==0){
                return true;
                
            }
        if(idx==arr.size()){
            
            
                return false;
            }
            
        
        if(dp[idx][target]!=-1) return dp[idx][target];
        bool skip=issubarr(idx+1,target,arr,dp);
        if(target<arr[idx]) return dp[idx][target] =skip;
        bool take=issubarr(idx+1,target-arr[idx],arr,
        dp);
        return dp[idx][target]=skip||take;
    }
    int countSubsetsWithSumK(int n, int K, vector<int>& arr) {
        vector<vector<int>>dp(n,vector<int>(K+1,-1));
        int count=0;
        for(int i=0;i<n;i++){
            if(issubarr(i,K,arr,dp)){
                count++;
            }
        }
        return count;
        
    }
};