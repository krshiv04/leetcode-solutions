class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xorall=0, result1=0, result2=0;

        for(int i=0; i<n; i++)
        xorall^=nums[i];

        int mask=xorall & (-(unsigned int)xorall);

        for(int i=0; i<n; i++)
        {
            if(nums[i]&mask)   result1^=nums[i];
            else    result2^=nums[i];
        }
        

        vector<int>ans;
        ans.push_back(result1);
        ans.push_back(result2);

        return ans;

    }
};