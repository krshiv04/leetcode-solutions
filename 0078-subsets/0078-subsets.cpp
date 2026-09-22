class Solution {
public:
    void generateSubsets(vector<int>& nums, int index, int n, vector<vector<int>>& ans,
    vector<int>& temp)
    {
        if(index==n)
        {
            ans.push_back(temp);
            return;
        }
        // Don't take the element
        generateSubsets(nums,index+1,n,ans,temp);
        // Take the element
        temp.push_back(nums[index]);
        generateSubsets(nums,index+1,n,ans,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        generateSubsets(nums, 0, nums.size(), ans, temp);
        return ans;
    }
};