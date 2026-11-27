// Problem: CNTINVERSION
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/CNTINVERSION
// Solved on: 2026-11-27T07:01:06.202Z

long long countInversion(vector<int>& arr, int n) {
    long long count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++ ){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
    
}