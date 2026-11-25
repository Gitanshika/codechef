// Problem: OIWPE01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/OIWPE01
// Solved on: 2026-11-25T20:12:01.130Z

 int lcs(int i,int j,string &text1, string &text2,vector<vector<int>>&dp){
        if(i==text1.size()|| j==text2.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(text1[i]==text2[j]) {
            return dp[i][j]=1+lcs(i+1,j+1,text1,text2,dp);
        }
        
        return dp[i][j]= max(lcs(i+1,j,text1,text2,dp),lcs(i,j+1,text1,text2,dp));
        
    }
int findLongestCommonSubsequence(string firstText, string secondText) {
    vector<vector<int>>dp(firstText.size(),vector<int>(secondText.size(),-1));
    return lcs(0,0,firstText,secondText,dp);
}