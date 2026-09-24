class Solution {
public:

    void permut(vector<int>& nums, int index, vector<vector<int>>& ans, vector<int>& visited,
    vector<int>& temp)
    {
        if(index==nums.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i=0; i<nums.size();i++)
        {
           if(visited[i]==0)
           {
                visited[i]=1;
                temp.push_back(nums[i]);
                permut(nums, index+1, ans, visited, temp);
                visited[i]=0;
                temp.pop_back();
           }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> visited(nums.size(),0);
        vector<int> temp;
        permut(nums, 0, ans, visited, temp);

        return ans;
        
    }
};