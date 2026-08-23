class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat[0].size();
        k = k % n;
        vector<vector<int>> org = mat;
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (j % 2 == 0) {
                    for (int m = 0; m < n - 1; m++) {
                        swap(mat[j][m], mat[j][m + 1]);
                    }
                } else {
                    for (int l = n - 1; l > 0; l--) {
                        swap(mat[j][l], mat[j][l - 1]);
                    }
                }
            }
        }
        if (org == mat) {
            return true;
        } else {
            return false;
        }
    }
};