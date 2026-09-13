class Solution {
public:
    string minWindow(string s, string t) {

        if (s.size() < t.size())
            return "";

        unordered_map<char, int> freq;
        unordered_map<char, int> curr;

        for (char c : t)
            freq[c]++;

        int l = 0, r = 0, count=0, bestL = 0,bestLen = INT_MAX;;
        string ans="";

        // Calculate the length
        while (r < s.size()) {
            if(freq.count(s[r]))
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

                    if(freq.count(s[l]))
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