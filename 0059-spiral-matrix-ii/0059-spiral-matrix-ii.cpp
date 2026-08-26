class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n));
        int top=0, right=n-1, left=0, bottom=n-1, count=1;
        while(top<=bottom && left<=right)
        {
            for(int c=left; c<=right; c++)
            ans[top][c]=count++;
            top++;

            for(int r=top; r<=bottom; r++)
            ans[r][right]=count++;
            right--;

            if(top<=bottom)
            for(int c=right; c>=left; c--)
            ans[bottom][c]=count++;
            bottom--;

            if(left<=right)
            for(int r=bottom; r>=top; r--)
            ans[r][left]=count++;
            left++;
        }return ans;
    }
};