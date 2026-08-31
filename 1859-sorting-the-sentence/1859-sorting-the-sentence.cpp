class Solution {
public:
    string sortSentence(string s) {
        vector<string> arr(10);
        int i=0, index=-1, count=0; string temp, ans;
        while(i<s.size())
        {
            if(s[i]==' ')
            {
                index=temp[temp.size()-1]-'0';
                temp.pop_back();
                arr[index]=temp;
                temp.clear();
                count++;
            }

            else temp+=s[i];
            i++;
        }
        index=temp[temp.size()-1]-'0';
        temp.pop_back();
        arr[index]=temp;
        temp.clear(); count++;

        // Generate the sorted string
        for(int i=1; i<=count; i++)
        ans+=arr[i]+" ";

        ans.pop_back();
        return ans;
    }
};