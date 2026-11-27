// Problem: MATSETZERO
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/MATSETZERO?tab=statement
// Solved on: 2026-11-27T18:34:18.827Z

void setZeroes(vector<vector<int>> &mat) {
    int m = mat.size();
    int n = mat[0].size();

    vector<int> row(m, 0);
    vector<int> col(n, 0);

    // Step 1: Mark rows and columns containing zero
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: Set corresponding cells to zero
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(row[i] == 1 || col[j] == 1) {
                mat[i][j] = 0;
            }
        }
    }
}