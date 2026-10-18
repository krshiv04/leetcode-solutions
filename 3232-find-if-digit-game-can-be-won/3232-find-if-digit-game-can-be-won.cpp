class Solution {
public:
    bool singleSum(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]/10) b+=nums[i];
            else a+=nums[i];
        }
        return a>b;
    }
    bool doubleSum(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]/10) a+=nums[i];
            else b+=nums[i];
        }
        return a>b;
    }
    bool canAliceWin(vector<int>& nums) {
        bool single = singleSum(nums);
        bool doub = doubleSum(nums);
        return single||doub;
    }
};