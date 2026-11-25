// Problem: VUUDN01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/VUUDN01
// Solved on: 2026-11-25T21:07:58.108Z

int op(int i,int j,string &s1, string &s2,vector<vector<int>>&dp){
    if(i==s1.length()) return s2.length()-j;
    if(j==s2.length()) return s1.length()-i;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]){
       return dp[i][j]=op(i+1,j+1,s1,s2,dp);
    }
     return dp[i][j]=1+min(op(i+1,j,s1,s2,dp),min(op(i+1,j+1,s1,s2,dp),op(i,j+1,s1,s2,dp)));
}
int calculateMinimumOperations(string sourceText, string targetText) {
vector<vector<int>>dp(sourceText.size(),vector<int>(targetText.size(),-1));
return op(0,0,sourceText,targetText,dp);
}