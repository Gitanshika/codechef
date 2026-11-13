// Problem: SUBINC
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/SUBINC?tab=statement
// Solved on: 2026-11-13T06:19:55.863Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=1;
        vector<int>arr(n);
        vector<int>dp(n+1,1);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            if(arr[i-1]<=arr[i]){
                dp[i]+=dp[i-1];
            }
            ans+=dp[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
