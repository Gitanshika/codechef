// Problem: NPTAS01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/NPTAS01
// Solved on: 2026-11-25T17:04:06.644Z

class Solution {
public:
    int  fall(vector<vector<int>>& matrix,vector<vector<int>>&dp,int r,int c){
        int n=matrix.size();
        int m=matrix[0].size();
        if(c<0 ||c>=m|| r>=n)return INT_MAX;
        if(r==n-1)return matrix[r][c];
        if(dp[r][c]!=1) return dp[r][c];
        int left=fall(matrix,dp,r+1,c-1);
        int down=fall(matrix,dp,r+1,c);
        int right=fall(matrix,dp,r+1,c+1);
        return dp[r][c]=matrix[r][c]+min(left,min(right,down));
    }
    int calculateMinFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,1));
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,fall(matrix,dp,0,i)) ;
        }
        return ans;
    }
};
