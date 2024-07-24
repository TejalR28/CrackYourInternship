class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
       while(columnNumber>0){
        columnNumber--;
        int digit = columnNumber % 26;
        columnNumber = columnNumber / 26 ;
        res.push_back(digit + 'A');
       }
       reverse(res.begin(),res.end());
       return res;
    }
};
