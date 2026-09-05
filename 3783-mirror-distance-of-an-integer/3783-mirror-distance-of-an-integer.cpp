class Solution {
public:
    int reverse(int num)
    {
        int ans=0;
        while(num)
        {
            ans=ans*10+num%10;
            num/=10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        int num=reverse(n);
        return abs(n-num);
    }
};