class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size(), col=matrix[0].size();
        int top=0, right=col-1, left=0, bottom=row-1;

        while(top<=bottom && left<=right)
        {
            // Left to Right
            for(int c=left; c<=right; c++)
                ans.push_back(matrix[top][c]);
            top++;
            // Top to Bottom
            for(int r=top; r<=bottom; r++)
                ans.push_back(matrix[r][right]);
            right--;

            // Right to Left
            if(top<=bottom)
            for(int c=right; c>=left; c--)
                ans.push_back(matrix[bottom][c]);
            bottom--;
            // Bottom to Top 
            if(left<=right)
            for(int r=bottom; r>=top; r--)
                ans.push_back(matrix[r][left]);
            left++;
        } return ans;
    }
};