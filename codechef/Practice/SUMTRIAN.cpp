// Problem: SUMTRIAN
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/SUMTRIAN
// Solved on: 2026-11-25T15:16:12.152Z

#include <bits/stdc++.h>
using namespace std;
int solve(int i,int j,vector<vector<int>>&a , vector<vector<int>>&dp){
    int n=a.size();
    if(i==n-1) return a[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=a[i][j]+max(solve(i+1,j,a,dp),solve(i+1,j+1,a,dp));
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<vector<int>>a(n);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<=i;j++){
	            int x;
	            cin>>x;
	            a[i].push_back(x);
	        }
	    }
	    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
	   cout<<solve(0,0,a,dp)<<endl;
	}

}
