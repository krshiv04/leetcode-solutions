class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0, e=nums.size()-1,mid,ans=nums[0];
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]>=nums[0]) s=mid+1;
            else
            {
                ans=nums[mid];
                e=mid-1;
            }
        }return ans;
    }
};