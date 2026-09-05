class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=INT_MIN, mini=INT_MAX, n=nums.size();
        vector<int> suffMax(nums.size());

        for(int i=n-1; i>=0; i--)
        {
            mini=min(mini, nums[i]);
            suffMax[i]=mini;
        }

        for(int i=0; i<n; i++)
        {
            maxi=max(maxi,nums[i]);
            if(maxi-suffMax[i]<=k) return i;
        }
        return -1;
    }
};