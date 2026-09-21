class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size(), xorAll=0, result1=0, result2=0;
        for(auto num:nums)
        xorAll^=num;

        int mask=xorAll&(-(unsigned int)xorAll);

        for(auto num:nums)
        {
            if(num&mask) result1^=num;
            else result2^=num;
        }

        vector<int> ans;
        ans.push_back(result1);
        ans.push_back(result2);
        return ans;

    }
};