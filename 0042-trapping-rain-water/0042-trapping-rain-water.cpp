class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0, rmax=0, water=0, s=0, e=height.size()-1;
        while(s<e)
        {
            if(lmax<height[s])  lmax=height[s];
            if(rmax<height[e])  rmax=height[e];
            if(lmax<=rmax)  {water+=lmax-height[s]; s++;}
            else {water+=rmax-height[e]; e--;}
        }
        return water;
    }

};