class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int n=word1.length();
        int m=word2.length();
        int i=0;
        int j=0;
        while(i<n && j<m){
            res+=word1[i];
            res+=word2[j];
            i++;
            j++;
        }
        while(i<n){
            res+=word1[i];
            i++;
        }
        while(j<m){
            res+=word2[j];
            j++;
        }
        return res;
    }
};