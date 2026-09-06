class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count(256,0);
        int first=0, sec=0, len=0;
        while(sec<s.size())
        {
            if(count[s[sec]])
            {    while(count[s[sec]])
                {
                    count[s[first]]=0;
                    first++;
                }}
            count[s[sec]]++;
            len=max(len,sec-first+1);
            sec++;
        }return len;
    }
};