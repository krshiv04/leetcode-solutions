class Solution {
public:
    int myAtoi(string s) {
        bool neg=false;
        int ans=0, i=0;
        // Remove Leading Spaces
        while(i<s.size())
        {
            if(s[i]==' ')s.erase(i,1);
            else break;
        }
        i=0;
        // Check base cases
        if(s.size()==0) return 0;
        // Check signs
        if(s[0]=='-') {neg=true;i++;}
        if(s[0]=='+') i++;
        // Convert to num
        while(i<s.size())
        {
            if(isdigit(s[i]))
            {   
                int limit = neg?8:7;
                if(ans>INT_MAX/10 || ans==INT_MAX/10 && s[i]-'0'>=limit)
                {
                    if(neg) return INT_MIN;
                    else return INT_MAX;
                }
                ans= ans*10 + (s[i]-'0');
                i++;
            }
            else break;
        }
        // If negative convert to negative
        if(neg) return -ans;
        else return ans;
    }
};