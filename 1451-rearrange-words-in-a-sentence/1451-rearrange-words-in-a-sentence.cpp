class Solution {
public:
    string arrangeWords(string text) {
        // lowercase the first letter
        text[0]=tolower(text[0]);

        vector<string> arr;
        int i=0;
        string temp;
        while(i<text.size())
        {
            if(text[i]==' ')
            {
                arr.push_back(temp);
                temp.clear();
            }
            else temp+=text[i];
            i++;
        }
        arr.push_back(temp);
        stable_sort(arr.begin(), arr.end(),[](string a, string b){
            return a.size()<b.size();
        });

        string ans;
        for(int i=0; i<arr.size(); i++)
            ans+=arr[i]+' ';
        
        ans.pop_back();
        // First letter Capital
        ans[0]=toupper(ans[0]);

        return ans;
    }
};