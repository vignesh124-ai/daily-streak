class Solution {
public:
    bool isPowerOfTwo(int n) {
        vector<int> arr;
        while(n>0){
            int rem=n%2;
            arr.push_back(rem);
            n=n/2;
        }
        int sum=0;
        for(auto it=arr.begin();it!=arr.end();it++){
            sum=sum+*it;
        }
        if(sum==1){return true;}
        else{return false;}
    }
};