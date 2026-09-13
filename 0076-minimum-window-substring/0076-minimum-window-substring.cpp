class Solution {
public:
    string minWindow(string s, string t) {

        if (s.size() < t.size())
            return "";

        vector<int> freq(128);
        vector<int> curr(128);

        for (char c : t)
            freq[c]++;

        int l = 0, r = 0, count=0, bestL = 0,bestLen = INT_MAX;;
        string ans="";

        // Calculate the length
        while (r < s.size()) {
            if(freq[s[r]]>0)
            {
                curr[s[r]]++;

                if (curr[s[r]] <= freq[s[r]])
                    count++;
            }
            r++;

            if(count==t.size())
            {
                while(count==t.size())
                {   
                    if (r - l < bestLen) {
                        bestLen = r - l;
                        bestL = l;
                    }

                    if(freq[s[l]]>0)
                    {   
                        if(curr[s[l]]<=freq[s[l]])
                        count--;

                        curr[s[l]]--;
                    }
                    l++;
                }
            }
        }
        if (bestLen == INT_MAX)
            return "";

        return s.substr(bestL, bestLen);
    }
};