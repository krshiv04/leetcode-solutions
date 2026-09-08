class Solution {
public:
    int commas(int num)
    {
        if(num<1000) return 0;
        return 1+commas(num/1000);
    }

    int countCommas(int n) {
        if(n<1000) return 0;
        int c=commas(n);
        return c+c*(n-1000);
    }
};