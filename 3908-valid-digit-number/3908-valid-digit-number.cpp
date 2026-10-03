class Solution {
public:
    bool validDigit(int n, int x) {

        int ans=0;
        bool found=false;
        while(n>=10)
        {
            int rem=n%10;
            if(rem==x) found=true;
            ans=ans*10+rem;
            n/=10;
        }

        if(found && n!=x) return true;
        else return false;
    }
};