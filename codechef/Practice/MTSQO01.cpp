// Problem: MTSQO01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/MTSQO01?tab=statement
// Solved on: 2026-11-13T06:44:06.603Z

class Solution {
public:
    int amt(int idx,const vector<int>& houseMoneyList,vector<int>&dp,int d){
        if(idx>d) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int skip=amt(idx+1,houseMoneyList,dp,d);
        int take=houseMoneyList[idx]+amt(idx+2,houseMoneyList,dp,d);
        return dp[idx]=max(skip,take);
    }
    int calculateMaxRobAmount(const vector<int>& houseMoneyList) {
        int n=houseMoneyList.size();
        if(n == 0) return 0;
if(n == 1) return houseMoneyList[0];
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        return max(amt(0,houseMoneyList,dp1,n-2) ,amt(1,houseMoneyList,dp2,n-1));
        
    }
};
