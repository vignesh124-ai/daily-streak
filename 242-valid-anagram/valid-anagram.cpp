class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash1(26);
        vector<int> hash2(26);
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2){
            return false;
        }
        for(int i=0;i<n1;i++){
            hash1[s[i]-'a']++;
        }
        for(int j=0;j<n2;j++){
            hash2[t[j]-'a']++;
        }
        if(hash1==hash2){
            return true;
        }
        else{
            return false;
        }
        }
};