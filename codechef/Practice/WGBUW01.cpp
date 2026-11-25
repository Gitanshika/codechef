// Problem: WGBUW01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/WGBUW01
// Solved on: 2026-11-25T21:24:45.769Z


    int solve(int idx,int buy,vector<int>&prices,vector<vector<int>>&dp){
        if(idx==prices.size()) return 0;

        if(dp[idx][buy]!=-1) return dp[idx][buy];

        if(buy==1){
            int take=-prices[idx]+solve(idx+1,0,prices,dp);
            int skip=solve(idx+1,1,prices,dp);
            return dp[idx][buy]=max(take,skip);
        }
        else{
            int sell=prices[idx];
            int skip=solve(idx+1,0,prices,dp);
            return dp[idx][buy]=max(sell,skip);
        }
    }

    int calculateMaxProfit(vector<int>& stockPrices)  {
        int n=stockPrices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(0,1,stockPrices,dp);
    }