class Solution {
public:
    long long solve(int i, int j, string& s, string& t, vector<vector<long long>>& arr)
    {
        // Base cases
        if(j==t.size()) return 1;

        if(i==s.size()) return 0;

        // Check if value is already existing
        if(arr[i][j]!=-1)
            return arr[i][j];

        // Check for possible ways
        if(s[i]!=t[j]) 
        return arr[i][j] = solve(i+1,j,s,t,arr);
        return arr[i][j] = solve(i+1, j+1, s, t, arr) + solve(i+1,j,s,t,arr);
    }

    int numDistinct(string s, string t) {
        int n=s.size(), m=t.size();

        vector<vector<long long>> arr(n+1, vector<long long>(m+1, -1));

        return solve(0,0,s,t,arr);
    }
};