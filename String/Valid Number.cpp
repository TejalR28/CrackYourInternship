class Solution {
public:
      bool isDigit(char a){
        if(a>='0' && a<='9')return true;
        return false;
    }
    bool isNumber(string s) {
        bool num = false;
        bool en = false;
        bool dot = false;

        for(int i=0;i<s.length();i++){
            if(isDigit(s[i])){
                num = true;
            }else if(s[i]=='.'){
                if(en || dot)return false; 
                dot = true;
            }else if(s[i]=='e' || s[i]=='E'){
                if(en || !num)return false;
                en = true;
                num= false;     
            }else if(s[i]=='+' || s[i]=='-'){
                if(i!=0 && s[i-1]!='e'){
                    if(s[i-1]!='E')return false;  
                }
            }else return false;
        }
        return num;
    }
};