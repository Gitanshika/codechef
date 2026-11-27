// Problem: PREP02
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/PREP02?tab=statement
// Solved on: 2026-11-27T19:11:11.846Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<vector<int>>mat(n,vector<int>(n));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>mat[i][j];
	        }
	    }
	  
	    vector<vector<int>>m(n,vector<int>(n));
	    for(int i=n-1;i>=0;i--){
	        for(int j=n-1;j>=0;j--){
	            cout<<mat[i][j]<<" ";
	  
	        }
	        cout<<endl;
	    }
	    
	  
	}
 return 0;
}
