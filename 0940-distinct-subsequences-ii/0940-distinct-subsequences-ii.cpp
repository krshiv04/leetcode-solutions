class Solution {
public:
    int distinctSubseqII(string s) {
        const long long mod=1e9+7;

        vector<long long> dp(26,0);

        for(int i=0; i<s.size(); i++)
        {   
            // Calculate the index to which the subsequence will end as char
            int index=s[i]-'a';

            // Count the existing subsequences
            int count=0;

            for(int j=0; j<26; j++) 
                count=(count+dp[j])%mod;
            
            // Now add 1 to the total and place it in the current char's index
            dp[index]=(count+1)%mod;
        }

        // Add all the subsequences
        long long ans=0;

        for(int j=0; j<26; j++) 
            ans=(ans+dp[j])%mod;
        
        return ans;
    }
};