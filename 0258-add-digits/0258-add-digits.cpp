class Solution {
public:
    int digitSum(int num)
    {
        int sum=0;
        while(num)
        {
            int digit=num%10;
            sum+=digit;
            num/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        
        if(num<=9) return num;
        while(num/10!=0)
        {
            num = digitSum(num);
        }
        return num;
    }
};