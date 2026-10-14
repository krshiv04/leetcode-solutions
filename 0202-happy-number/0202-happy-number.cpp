class Solution {
public:
    int sum(int n)
    {
        int ans=0;
        while(n)
        {
            int rem=n%10;
            ans+=rem*rem;
            n/=10;
        } return ans;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1)
        {
            if(seen.find(n) != seen.end()) return false;

            seen.insert(n);
            n = sum(n);
        }
        return true;
    }
};