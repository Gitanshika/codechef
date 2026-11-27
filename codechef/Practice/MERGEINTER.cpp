// Problem: MERGEINTER
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/MERGEINTER
// Solved on: 2026-11-27T16:47:17.023Z

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        ans.push_back(intervals[0]);
        for(int i=1;i<n-1;i++){
            if(ans.back()[1]>=intervals[i][0]){
                ans.back()[1]=max(intervals[i][1],ans.back()[1]);
            }
            else{
            ans.push_back(intervals[i]);
            }
        }
        
        if(ans.back()[1]>=intervals[n-1][0]){
            ans.back()[1]=max(intervals[n-1][1],ans.back()[1]);
        }
        else{
        ans.push_back(intervals[n-1]);
        }
        return ans;
        
    }
};
