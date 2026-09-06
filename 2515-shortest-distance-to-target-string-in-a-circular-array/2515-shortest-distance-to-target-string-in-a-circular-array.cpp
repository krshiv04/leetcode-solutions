class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int d, cd=INT_MAX, n=words.size();
        for(int i=0; i<n; i++)
        if(words[i]==target){
            d=abs(i-startIndex);
            cd=min(cd,min(d,n-d));
        }
        if(cd==INT_MAX) return -1;
        return cd;
    }
};