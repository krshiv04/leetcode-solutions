class Solution {
public:
    int reverse(int x) {
        int reverseNum = 0;
        while (x != 0) 
        {
            // Check for integer overflow
            if(reverseNum < INT_MIN/10 || reverseNum == INT_MIN/10 && x%10<-8 )
            return 0;
            
            else if(reverseNum > INT_MAX/10 || reverseNum == INT_MAX/10 && x%10>7 )
            return 0;

            reverseNum = reverseNum * 10 + x % 10;
            x /= 10;
        }
        return reverseNum;
    }
};