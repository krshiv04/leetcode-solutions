class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int steps=1, visited=1, n=rows*cols;
        vector<vector<int>> ans;
        ans.reserve(n);
        ans.push_back({rStart,cStart});

        while(visited<n)
        {
            // Right
            for(int i=1; i<=steps; i++)
            {   
                if(rStart>=0 && rStart<rows && cStart+1>=0 && cStart+1<cols)
                {
                    ans.push_back({rStart,cStart+1});
                    visited++;
                }
                cStart++;
            }
            // Down
            for(int i=1; i<=steps; i++)
            {   
                if(rStart+1>=0 && rStart+1<rows && cStart>=0 && cStart<cols)
                {
                    ans.push_back({rStart+1,cStart});
                    visited++;
                }
                rStart++;
            }
            // Step increment
            steps++;
            // Left
            for(int i=1; i<=steps; i++)
            {   
                if(rStart>=0 && rStart<rows && cStart-1>=0 && cStart-1<cols)
                {
                    ans.push_back({rStart,cStart-1});
                    visited++;
                }
                cStart--;
            }
            // Top
            for(int i=1; i<=steps; i++)
            {   
                if(rStart-1>=0 && rStart-1<rows && cStart>=0 && cStart<cols)
                {
                    ans.push_back({rStart-1,cStart});
                    visited++;
                }
                rStart--;
            }

            // Step increment
            steps++;
        } return ans;
    }
};