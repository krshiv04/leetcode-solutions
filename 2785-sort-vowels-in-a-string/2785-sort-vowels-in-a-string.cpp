class Solution {
public:
    string sortVowels(string s) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);
        string vowels;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                upper[s[i]-'A']++;
                s[i]='#';
            }

            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }

        for(int i=0; i<26; i++)
        {
            char c=i+'A';
            while(upper[i])
            {
                vowels+=c;
                upper[i]--;
            }
        }

        for(int i=0; i<26; i++)
        {
            char c=i+'a';
            while(lower[i])
            {
                vowels+=c;
                lower[i]--;
            }
        }
        int first=0, sec=0;
        while(sec<vowels.size())
        {
            if(s[first]=='#')
            {
                s[first]=vowels[sec];
                sec++;
            }
            first++;
        } return s;
    }
};