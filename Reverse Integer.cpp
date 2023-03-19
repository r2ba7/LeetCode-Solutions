class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        string number;
        char sign = '\0';
        for (int i = s.length()-1; i >= 0; i--){
            if(s[i]=='-')   break;
            else    number += s[i];
        }
    if(number.size() > to_string(INT_MAX).length()) return 0;
    else if(number.size() == to_string(INT_MAX).length()){
        string r1 = number.substr(0, 9);
        string r2 = to_string(INT_MAX).substr(0, 9);
        if(stoi(r1) > stoi(r2))  return 0;
        else{
            if(x>0) return stoi(number);
            else    return -1*stoi(number);
            }
    }else{
        if(x>0) return stoi(number);
        else    return -1*stoi(number);
        }
    }
};
