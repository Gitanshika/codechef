// Problem: DORKL01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/DORKL01
// Solved on: 2026-11-25T19:34:18.114Z

int ways(int idx,int targetAmount,vector<int>&coinDenominations,vector<vector<int>>&dp){
    if(targetAmount==0) return 1;
    if(idx==coinDenominations.size()){
        return 0;
    }
if(dp[idx][targetAmount]!=-1) return dp[idx][targetAmount];
int skip=ways(idx+1,targetAmount,coinDenominations,dp);
if(targetAmount<coinDenominations[idx]) return dp[idx][targetAmount]=skip;
int take=ways(idx,targetAmount-coinDenominations[idx],coinDenominations,dp);
return dp[idx][targetAmount]=take+skip;
}
int countCoinCombinations(int targetAmount, vector<int> coinDenominations) {
    int n=coinDenominations.size();
    vector<vector<int>>dp(n,vector<int>(targetAmount+1,-1));
   return ways(0,targetAmount,coinDenominations,dp);
}