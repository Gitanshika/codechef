// Problem: LEADERINARAY
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/LEADERINARAY
// Solved on: 2026-11-27T10:54:29.920Z

class Solution {
public:
    vector<int>nge(vector<int>&nums){
        stack<int>st;
        int n=nums.size();
        vector<int>temp(n,INT_MIN);
        for(int j=n-1;j>=0;j--){
            while(!st.empty() && st.top()<=nums[j] ){
                st.pop();
            }
            if(!st.empty()){
                temp[j]=st.top();
            }
            st.push(nums[j]);
        }
        return temp;
    }
    vector<int> findLeaders(vector<int>& nums) {
        // write your code here

       // stack<int>st;
        vector<int>temp=nge(nums);
        vector<int>ans;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==INT_MIN){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

