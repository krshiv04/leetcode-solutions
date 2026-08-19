class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0, e=1;
        while(e<nums.size())
        {   
            if(s==e)
            {   
                e++;
                if(e >= nums.size())
                break;
            }
            if(nums[s]==0)
            {
                if(nums[e]==0) e++;
                else
                {
                    swap(nums[s],nums[e]);
                    s++,e++;
                }
            }
            else s++;
        }
    }
};