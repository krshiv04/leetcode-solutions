class Solution {
public:
    string add(string num1, string num2)
    {
        int index1=num1.size()-1, index2=num2.size()-1, carry=0, res;
        string ans;
        while(index2>=0)
        {
            res=(num1[index1]-'0') + (num2[index2]-'0') + carry;
            carry=res/10;
            ans+=res%10 + '0';
            index1--, index2--;
        }
        while(index1>=0)
        {
            res=(num1[index1]-'0') + carry;
            carry=res/10;
            ans+=res%10 + '0';
            index1--;
        }
        if(carry)
        ans+='1';

        reverse(ans.begin(), ans.end());
        return ans;
    }
    string addStrings(string num1, string num2) {
        if(num1.size()>num2.size())
            return add(num1, num2);
        else 
            return add(num2,num1);
    }
};