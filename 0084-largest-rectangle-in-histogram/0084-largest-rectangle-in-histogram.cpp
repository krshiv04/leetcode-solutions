class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(), ans=0;
        vector<int> nsr(n);
        vector<int> nsl(n);
        stack<int> st;

        for(int i=0; i<n; i++)
        {
            while(!st.empty() && heights[st.top()]>heights[i])
            {
                nsr[st.top()]=i;
                st.pop();
            }st.push(i);
        }
        while(!st.empty())
        {
            nsr[st.top()]=n;
            st.pop();
        }

        for(int i=n-1; i>=0; i--)
        {
            while(!st.empty() && heights[st.top()]>heights[i])
            {
                nsl[st.top()]=i;
                st.pop();
            }st.push(i);
        }
        while(!st.empty())
        {
            nsl[st.top()]=-1;
            st.pop();
        }

        for(int i=0; i<n; i++)
        ans=max(ans, heights[i]*(nsr[i]-nsl[i]-1));

        return ans;
    }
};