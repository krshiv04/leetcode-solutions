class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int l=0, r=0;
        vector<int> temp;

        while(l<num1.size() && r<num2.size())
        {
            if(num1[l]<num2[r]) temp.push_back(num1[l++]);
            else temp.push_back(num2[r++]);
        }
        while(l<num1.size())    temp.push_back(num1[l++]);
        while(r<num2.size())    temp.push_back(num2[r++]);

        int n=temp.size();
        if(n==0) return 0.0;
        else if(n%2==0) return (temp[(n/2)-1]+temp[n/2])/2.0;
        else return temp[n/2];
    }
}; 
