class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        int s=0, e=n*m-1, mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            int r=mid/m, c=mid%m;

            if(matrix[r][c]==target)    return true;
            else if(matrix[r][c]>target)    e=mid-1;
            else    s=mid+1;
        }
        return false;
    }
};