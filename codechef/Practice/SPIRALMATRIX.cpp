// Problem: SPIRALMATRIX
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/SPIRALMATRIX
// Solved on: 2026-11-27T17:58:54.173Z

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
       int top=0;
       int bottom=m-1;
       int left=0;
       int right=n-1;
       vector<int>ans;
       while(top<=bottom  && left<=right){
           for(int j=left;j<=right;j++){
           ans.push_back(matrix[top][j]);
           }
       top++;
      
           for(int i=top;i<=bottom;i++){
           ans.push_back(matrix[i][right]);
    
       }
       right--;
       //if(top<=bottom){
           for(int k=right;k>=left;k--){
               ans.push_back(matrix[bottom][k]);
           }
           bottom--;
      // }
       //if(left<=right){
          for(int j=bottom;j>=top;j--){
               ans.push_back(matrix[j][left]);
           }
          left++;
       //}
       
       }
        return ans;
    }
};

