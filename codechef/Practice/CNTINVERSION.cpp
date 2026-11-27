// Problem: CNTINVERSION
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/CNTINVERSION
// Solved on: 2026-11-27T07:11:16.512Z

long long countInversion(vector<int>& arr, int n) {
    long long count=0;
    stack<int>st;
    int i=0;
    while(i<n){
        st.push(arr[i]);
        for(int j=i+1;j<n;j++ ){
            if(st.top()>arr[j]){
                count++;
            }
        }
        st.pop();
        i++;
    }
    return count;
    
}