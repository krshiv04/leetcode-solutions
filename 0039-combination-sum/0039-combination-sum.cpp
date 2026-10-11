class Solution {
public:

    void comb(vector<vector<int>>& ans, vector<int>& temp, vector<int>& candidates, int index, int sum)
    {
        if(sum==0)
        {
            ans.push_back(temp);
            return;
        }

        if(sum<0)
        return;

        for(int i=index; i<candidates.size(); i++)
        {     
                temp.push_back(candidates[i]);
                comb(ans, temp, candidates, i, sum-candidates[i]);
                temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> temp;

        comb(ans, temp, candidates, 0, target);

        return ans;
    }
};