class Solution {
public:
    void paranthesis(int n, int l, int r, string& temp, vector<string>& ans)
    {
        if(l==n && r==n)
        {
            ans.push_back(temp);
            return;
        }
        if(l<n)
        {
            temp.push_back('(');
            paranthesis(n,l+1, r, temp, ans);
            temp.pop_back();
        }
        if(r<l)
        {
            temp.push_back(')');
            paranthesis(n,l, r+1, temp, ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        paranthesis(n,0,0,temp, ans);

        return ans;
    }
};