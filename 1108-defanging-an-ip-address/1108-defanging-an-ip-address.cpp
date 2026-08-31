class Solution {
public:
    string defangIPaddr(string address) {
        int i=0;
        string s="";
        while(i<address.size())
        {
            if(address[i]=='.') s+="[.]";
            else s+=address[i];
            i++;
        }return s;
    }
};