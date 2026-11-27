// Problem: MATSETZERO
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/MATSETZERO
// Solved on: 2026-11-27T18:25:06.528Z

void setZeroes(vector<vector<int>> &mat) {
    int m=mat.size();
    int n=mat[0].size();
    queue<pair<int,int>>q;
    for(int i=0;i<m;i++){
        for(int  j=0;j<n;j++){
            if(mat[i][j]==0){
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int r=it.first;
        int c=it.second;
        for(int i=0;i<m;i++){
            mat[i][c]=0;
        }
        for(int j=0;j<n;j++){
            mat[r][j]=0;
        }
    }
}