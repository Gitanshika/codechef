// Problem: NEXTPERM
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/NEXTPERM?tab=statement
// Solved on: 2026-11-27T12:01:02.812Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n;
	cin>>k;
	while(k){
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    
	}
	int gola_idx=-1;
	for(int j=n-1;j>=0;j--){
	    if(arr[j-1]<arr[j]){
	        gola_idx=j-1;
	        break;
	    }
	}
	int swap_idx=gola_idx;
	for(int j=n-1;j>=gola_idx;j--){
	    if(arr[j]>arr[gola_idx]){
	        swap_idx=j;
	        break;
	    }
	}
	    swap(arr[gola_idx],arr[swap_idx]);
	    reverse(arr.begin()+gola_idx+1,arr.end());
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    k--;
	}
	return 0;
	
}

