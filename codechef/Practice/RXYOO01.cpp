// Problem: RXYOO01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP02/problems/RXYOO01
// Solved on: 2026-11-25T20:41:02.099Z

 int lcs(int i,int j,string &text1, string &text2,vector<vector<int>>&dp){
        if(i==text1.size()|| j==text2.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(text1[i]==text2[j]) {
            return dp[i][j]=1+lcs(i+1,j+1,text1,text2,dp);
        }
        
        return dp[i][j]= max(lcs(i+1,j,text1,text2,dp),lcs(i,j+1,text1,text2,dp));
        
    }
int findLongestPalindromicSubsequenceLength(string inputString) {
    vector<vector<int>>dp(inputString.size(),vector<int>(inputString.size(),-1));
    string text2=inputString;
    reverse(text2.begin(),text2.end());
    return lcs(0,0,inputString,text2,dp);
    
}