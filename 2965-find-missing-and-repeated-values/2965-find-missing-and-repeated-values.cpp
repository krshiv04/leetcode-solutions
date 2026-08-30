class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n=grid.size();
        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        grid[i][j]--;

        for(int i=0; i<n*n; i++)
        {
            int x=grid[i/n][i%n]%(n*n);
            grid[x/n][x%n]+=n*n;
        }
        
        for(int i=0; i<n*n; i++)   
        {
            int count =  grid[i/n][i%n]/(n*n);
            if(count==2)
                ans.push_back(i+1);
        }

        for(int i=0; i<n*n; i++)   
        {
            int count =  grid[i/n][i%n]/(n*n);
            if(count==0)
                ans.push_back(i+1);
        }

        return ans;
    }
};