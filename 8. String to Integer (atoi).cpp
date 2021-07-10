class Solution {
public:
    string WHITESPACE = " \n\r\t\f\v";
    string ltrim(const std::string &s){
        size_t start = s.find_first_not_of(WHITESPACE);
        return (start == string::npos) ? "" : s.substr(start);
    }
    int myAtoi(string s) {
        s = ltrim(s);
        char sign ='+';
        int number=0;
        bool overflow = false;
        
        for(int i=0;i<s.size();i++){
            int t = s[i]-'0';
            if(i==0&&(s[0]=='+'||s[0]=='-')){
                sign = s[i];
                continue;
            }
            if(!isdigit(s[i]))
                break;
                   t = s[i] - '0';
            // Checking overflow
            if(number>INT_MAX/10 || (number==INT_MAX/10 && t > 7) )
            {
                overflow = true;
                break;
            }
            number= number*10 + t;
        }
        if(overflow){
            if(sign == '-')
                return INT_MIN;
            else
                return INT_MAX;
        }
        if(sign == '-')
            return number*-1;
        else
            return number;
    }
};
