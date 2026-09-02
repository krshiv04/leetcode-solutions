class Solution {
public:
    string intToRoman(int num) {
        string thousands[4] = {"","M","MM","MMM"};
        string hundereds[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string tens[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string ones[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

        return thousands[num/1000] + hundereds[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};