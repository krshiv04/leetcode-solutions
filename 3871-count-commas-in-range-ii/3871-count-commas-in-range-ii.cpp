class Solution {
public:
    long long countCommas(long long n){
        if(n<1000) return 0;
        long long start = 1000, ans=0;

        for(int i=1; i<=5; i++)
        {   
            long long end = start*1000-1;
            if(n<=end)
            {
                ans+=(n-start+1)*i;
                break;
            }
            else
                ans+=(end-start+1)*i;
            start*=1000;
        }
        return ans;
    }
};