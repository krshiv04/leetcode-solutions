class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int start=0, end=0;

        for(int i=0; i<nums.size()-2; i++)
        {   
            if(i>0 && nums[i]==nums[i-1])   continue;
            start=i+1;
            end=nums.size()-1;

            while(start<end)
            {
                if(nums[i]+nums[start]+nums[end]==0)
                {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    while(start<end && nums[start]==nums[start+1])  start++;
                    while(start<end && nums[end]==nums[end-1])  end--;
                    start++;
                    end--;
                }

                else if (nums[i]+nums[start]+nums[end]>0)
                    end--;
                else start++;
            }
        }
        return ans;
    }
};