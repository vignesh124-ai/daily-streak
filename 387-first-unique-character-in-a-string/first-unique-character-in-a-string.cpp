class Solution {
public:
    int firstUniqChar(string s) {
        queue<pair<char,int>> q;
        int arr[26]={0};
        for (int i = 0; i < s.length();i++){
            arr[s[i]-'a']++;
            q.push({s[i],i});
            while(!q.empty() && arr[q.front().first-'a']>1){
                q.pop();
            }
    }
    if(q.empty()){
        return -1;
    }
    else{
        return q.front().second;
    }
    }
    };