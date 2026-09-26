class Solution {
public:

    int winner(vector<bool>& person, int n, int k, int p_left, int index)
    {
        if(p_left==1)
        for(int i=0; i<n; i++)
        if(person[i]==0)
            return i;   
             
        int eliminate=(k-1)%p_left;
        while(eliminate--)
        {
            index=(index+1)%n;
            while(person[index]==1)
                index=(index+1)%n;
        }
        person[index]=1;
        while(person[index]==1)
            index=(index+1)%n;

        return winner(person, n, k, p_left-1, index);

    }
    int findTheWinner(int n, int k) {
        vector<bool> person(n,0);
        return winner(person,n,k,n,0)+1;

    }
};