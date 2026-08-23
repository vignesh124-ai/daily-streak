class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i=0;
        while(i<=1){
            int j=i+2;
            if(s1[i]!=s2[i]){
                swap(s1[i],s1[j]);
            }
            if(s1[i]!=s2[i]){
                return false;
            }
                i++;
        }
        return s1==s2;
    }
};