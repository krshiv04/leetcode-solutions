class Solution {
public:
    void lps_find(vector<int>& lps, string needle)
    {
        int p=0, s=1;
        while(s<needle.size())
        {
            if(needle[p]==needle[s])
            {
                lps[s]=p+1;
                p++, s++;
            }
            else
            {
                if(p==0)
                {
                    lps[s]=0;
                    s++;
                }
                else p=lps[p-1];
            }
        }
    }
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(), 0);
        int p=0, s=0;
        lps_find(lps,needle);

        while(p<haystack.size()&&s<needle.size())
        {
            if(haystack[p]==needle[s]) p++, s++;
            else
            {
                if(s==0) p++;
                else s=lps[s-1];
            }
        }
        if(s==needle.size())
        return p-s;
        return -1;
    }
};