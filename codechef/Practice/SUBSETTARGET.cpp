// Problem: SUBSETTARGET
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/SUBSETTARGET
// Solved on: 2026-11-10T09:22:28.763Z

class Solution {
public:
    bool issubarr(int idx,vector<int>& arr,int target,vector<vector<int>>&dp){
        if(idx==arr.size()){
            if(target==0){
                return true;
            }
            else{
                return false;
            }
        }
        if(dp[idx][target]!=-1) return dp[idx][target];
        bool skip=issubarr(idx+1,arr,target,dp);
        if(target<arr[idx]) return dp[idx][target] =skip;
        bool take=issubarr(idx+1,arr,target-arr[idx],
        dp);
        return dp[idx][target]=skip||take;
        
    }
    bool isSubsetSum(int n, vector<int>& arr, int target) {
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return issubarr(0,arr,target,dp);
    }
};