class Solution {
public:
    int findMin(vector<int>& nums) {
       int s=0, e=nums.size()-1, mid;
       while(s<=e)
       {
            mid=s+(e-s)/2;
            if(nums[mid]>nums[e]) s=mid+1;
            else if(nums[mid]<nums[e]) e=mid;
            else e--;
       }return nums[s];
    }
};