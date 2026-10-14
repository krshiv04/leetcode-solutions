class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int s=0,e=0, n=nums.size();

        for(int i=0; i<n-2; i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            s=i+1, e=n-1;
            while(s<e)
            {
                if(nums[i]+nums[s]+nums[e]==0)
                {
                    ans.push_back({nums[i], nums[s], nums[e]});
                    while(s<e && nums[s]==nums[s+1]) s++;
                    while(s<e && nums[e]==nums[e-1]) e--;
                    s++;e--;
                }
                else if(nums[i]+nums[s]+nums[e]<0) s++;
                else e--;
            }
        }return ans;
    }
};