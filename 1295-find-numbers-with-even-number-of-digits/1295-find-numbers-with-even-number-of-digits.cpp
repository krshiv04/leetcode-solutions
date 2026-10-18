class Solution {
public:
    int countDigits(int n)
    {
        int count=0;
        while(n)
        {
            count++;
            n/=10;
        } return count;
    }
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i=0; i<nums.size(); i++)
        {
            int digit=countDigits(nums[i]);
            if (digit%2==0) even++;
        } return even;
    }
};