// Problem: LEADERINARAY
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/LEADERINARAY
// Solved on: 2026-11-27T11:09:08.443Z

class Solution {
public:
    vector<int> findLeaders(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>temp(n,-1);
        for(int j=n-1;j>=0;j--){
        while(!st.empty() && nums[st.top()]<=nums[j]){
            st.pop();
        }
        if(!st.empty()){
            temp[j]=st.top();
        }
        st.push(j);
        
        }
        
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(temp[i]==-1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

