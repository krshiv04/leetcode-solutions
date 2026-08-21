class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int r=matrix.size(), c=matrix[0].size();
        vector<vector<int>> ans(c, vector<int>(r));
        for(int i=0; i<matrix.size(); i++)
        for(int j=0; j<matrix[0].size(); j++)
        ans[j][i]=matrix[i][j];

        return ans;
    }
};