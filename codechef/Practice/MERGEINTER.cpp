// Problem: MERGEINTER
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/MERGEINTER
// Solved on: 2026-11-27T15:25:49.383Z

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n-1;i++){
            if(intervals[i][1]>=intervals[i+1][0]){
                intervals[i][1]=max(intervals[i][1],intervals[i+1][1]);
                ans.push_back(intervals[i]);
                i++;
            }
        }
        return ans;
        
    }
};
