class Solution {
public:
    int digitSum(int n)
    {   
        int ans=0;
        while(n)
        {
            int rem=n%10;
            ans += rem;
            n/=10;
        }
        return ans;
    }

    int squareSum(int n)
    {   
        int ans=0;
        while(n)
        {
            int rem=n%10;
            ans += rem*rem;
            n/=10;
        }
        return ans;
    }
    bool checkGoodInteger(int n) {
        return (squareSum(n)-digitSum(n)) >= 50;
    }
};