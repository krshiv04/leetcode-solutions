class Solution {
public:
    int trap(vector<int>& height) {
        int maxi=INT_MIN, leftMax=0, rightMax=0, water=0, index=-1;
        for(int i=0; i<height.size(); i++)
            if(maxi<height[i])
            {
                maxi=height[i];
                index=i;
            }
        for(int i=0; i<index; i++)
        {
            if(leftMax<height[i])   leftMax=height[i];
            else    water+=leftMax-height[i];
        }

        for(int i=height.size()-1; i>index; i--)
        {
            if(rightMax<height[i])   rightMax=height[i];
            else    water+=rightMax-height[i];
        }
        return water;
    }

};