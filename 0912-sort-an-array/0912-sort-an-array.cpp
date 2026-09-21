class Solution {
public:

    void merge(vector<int>& nums, int s, int mid, int e)
    {
        vector<int>temp;
        int l=s, r=mid+1, index=0;

        while(l<=mid && r<=e)
        {
            if(nums[l]<nums[r])    temp.push_back(nums[l++]);
            else    temp.push_back(nums[r++]);
        }
        while(l<=mid)   temp.push_back(nums[l++]);
        while(r<=e)   temp.push_back(nums[r++]);

        while(s<=e)   nums[s++]=temp[index++];
    }
    void mergeSort(vector<int>& nums, int s, int e)
    {
        if(s>=e) return;
        int mid=s+(e-s)/2;

        // Left Side
        mergeSort(nums,s,mid);
        // Right Side
        mergeSort(nums,mid+1,e);
        // Merge
        merge(nums,s,mid,e);
    }

   
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);

        return nums;
    }
};