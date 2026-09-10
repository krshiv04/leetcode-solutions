class Solution {
public:

    void lpsFind(vector<int> &lps, string s)
    {
        int pre=0, suf=1;

        while(suf<s.size())
        {
            if(s[pre]==s[suf])
            {
                lps[suf] = pre+1;
                pre++, suf++;
            }

            else
            {
                if(pre==0)
                    suf++;
                
                else
                    pre = lps[pre-1];
            }
        }
    }

    int kmp(string str1, string str2)
    {
        vector<int> lps(str2.size(), 0);
        lpsFind(lps, str2);

        int first=0, second=0;
        while(first<str1.size() && second<str2.size())
        {
            if(str1[first] == str2[second])
                first++, second++;
            
            else{
                if(second==0)
                    first++;
                else
                    second = lps[second-1];
            }
        }

        if(second==str2.size())
            return true;
        
        return -1;
    }

    int repeatedStringMatch(string a, string b) {
        string repeatedStr = a;
        int repeat = 1;

        while(repeatedStr.size()<b.size())
        {
            repeatedStr += a;
            repeat++;
        }

        // Matched 
        if(kmp(repeatedStr,b)==true)
        return repeat;

        // Not Matched
        if(kmp(repeatedStr+a, b)==true)
        return repeat+1;

        return -1;
    }
};