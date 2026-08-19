class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> diff;
        int n=costs.size(), ans=0;

        // Generate difference
        for(int i=0; i<n; i++)
            diff.push_back(costs[i][0]-costs[i][1]);

        // Find minimum
        int j=1;
        while(j<=n/2)
        {
            int min=INT_MAX, index=-1;
            for(int i=0; i<diff.size(); i++)
            {
                if(diff[i]<min)
                {   
                    min=diff[i];
                    index=i;
                }    
            }
            diff[index]=INT_MAX;

            ans+=costs[index][0];
            j++;
        }

        // Add remaining elements costs
        for(int i=0; i<diff.size(); i++)
            if(diff[i]<INT_MAX)
                ans+=costs[i][1];
        return ans;
    }
};