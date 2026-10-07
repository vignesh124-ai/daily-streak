class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        string vowels="aeiouAEIOU";
        int count=0;
        for(int i=0;i<k;i++){
            if(vowels.find(s[i])!=string::npos){
                count++;
            }
        }
        int count_max=count;
        for(int j=k;j<n;j++){
            if(vowels.find(s[j])!=string::npos){
                count++;
            }
            if(vowels.find(s[j-k])!=string::npos){
                count=count-1;
            }
            count_max=max(count,count_max);
        }
        return count_max;
    }
};