class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int start=1, end=x/2, mid, pos=0;

        if (x<=1) return x;

        while(start<=end)
        {
            mid=start+(end-start)/2;

            if(mid==x/mid)
            return mid;

            else if(mid>x/mid)
            end=mid-1;

            else
            {
                pos=mid;
                start=mid+1;
            }
        }
        return pos;
    }
};