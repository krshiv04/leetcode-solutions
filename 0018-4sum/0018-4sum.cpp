class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int s=0, e=0, n=nums.size();

        for(int i=0; i<n-3; i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<n-2; j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                s=j+1, e=n-1;
                long long val = (long long)target - (nums[i]+nums[j]);
                while(s<e)
                {
                    if(nums[s]+nums[e]==val)
                    {
                        ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                        while(s<e && nums[s]==nums[s+1])    s++;
                        while(s<e && nums[e]==nums[e-1])    e--;
                        s++;
                        e--;
                    }
                    else if(nums[s]+nums[e]>val) e--;
                    else s++;
                }
            }
        }
        return ans;
    }
};