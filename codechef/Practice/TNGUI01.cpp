// Problem: TNGUI01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/TNGUI01?tab=statement
// Solved on: 2026-11-25T20:29:01.933Z

int ways(int i,int j,string &sourceString, string &targetString,vector<vector<int>>&dp){
    if(j==targetString.size()) return 1;
    if(i==sourceString.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int take=ways(i+1,j+1,sourceString,targetString,dp);
        int skip=ways(i+1,j,sourceString,targetString,dp);
    if(sourceString[i]==targetString[j]){
        
        return dp[i][j]=take+skip;
    }
    return dp[i][j]=skip;
}
int countDistinctSubsequences(string sourceString, string targetString) {
    vector<vector<int>>dp(sourceString.size(),vector<int>(targetString.size(),-1));
    return ways(0,0,sourceString,targetString,dp);
}