class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if (m * n != r * c)
            return mat;
        vector<int> oned(n * m);
        vector<vector<int>> ans(r, vector<int>(c));
        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         oned[n * i + j] = mat[i][j];
        //     }
        // }
        // for (int i = 0; i < oned.size(); i++) {
        //     ans[i / c][i % c] = oned[i];
        // }
        for (int i = 0; i < m * n; i++) {
            ans[i / c][i % c] = mat[i / n][i % n];
        }
        return ans;
    }
};