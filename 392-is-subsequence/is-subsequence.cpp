class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_ptr=0;
        int t_ptr=0;
        while(s_ptr<s.size() && t_ptr<t.size()){
            if(s[s_ptr]!=t[t_ptr]){
                t_ptr++;
            }
            else{
                t_ptr++;
                s_ptr++;
            }
        }
            if(s_ptr==s.size()){
                return true;
            }
            else{
                return false;
            }
    }
};