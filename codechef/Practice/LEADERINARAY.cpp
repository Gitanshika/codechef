// Problem: LEADERINARAY
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/LEADERINARAY
// Solved on: 2026-11-27T10:13:21.462Z

class Solution {
public:
    vector<int> findLeaders(vector<int>& nums) {
        vector<int>temp;
       
        for(int i=0;i<nums.size();i++){
             int c=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    c=-1;
                }
            }
            if(c!=-1){
            temp.push_back(nums[i]);
            }
        }
        return temp;
    }
};

