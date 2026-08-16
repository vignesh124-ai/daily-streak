class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        vector<char> res;
        for(int k=0;k<n;k++){
            if ((s[k] >= 'a' && s[k] <= 'z') || (s[k] >= 'A' && s[k] <= 'Z') || (s[k] >= '0' && s[k] <= '9')){
                if (s[k]>='A' && s[k]<='Z'){
                s[k]=s[k]+32;
                res.push_back(s[k]);
            }
            else{
                res.push_back(s[k]);
            }
        }
        }
        int i=0;
        int j=res.size()-1;
         while(i<j){
            if (res[i]!=res[j]) {
                return false;}
            i++;
            j--;}
        return true;
    }
};