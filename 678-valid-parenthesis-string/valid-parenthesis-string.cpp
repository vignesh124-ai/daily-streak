class Solution {
public:
    bool checkValidString(string s) {
        if(s.length()==1){
            if(s[0]=='(' || s[0]==')'){
            return false;}
            else{
                return true;
            }
        }
        int min=0;
        int max=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                min=min+1;
                max=max+1;
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                min=min-1;
                max=max-1;
            }
            else{
                min=min-1;
                max=max+1;
            }
            if(min<0){
                min=0;
            }
            if(max<0){
                return false;
            }
        }
        return (min==0);
    }
};