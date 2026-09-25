class Solution {
public:
    void permut(vector<int>& nums, int index, vector<vector<int>>& ans)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        vector<bool> visited(21,0);
        for(int i=index; i<nums.size();i++)
        if(visited[nums[i]+10]==0)
        {   
            swap(nums[i], nums[index]);
            permut(nums, index+1, ans);
            swap(nums[index], nums[i]);
            visited[nums[i]+10]=1;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permut(nums, 0, ans);

        return ans;
    }
};