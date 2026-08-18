class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> hash(51,0);
            for(int i=0;i<n;i++){
                hash[nums[i]]++;
            }
        if(k==1){
            int lar=-1;
            for(int j=0;j<=50;j++){
                if(hash[j]==1){
                        lar=max(lar,j);
                }
            }
            return lar;
            }
            else if(k==n){
                int lar2=-1;
            for(int j=0;j<=50;j++){
                if(hash[j]>0){
                        lar2=max(lar2,j);
                }
            }
            return lar2;
            }
            else{
                int n1=nums[0];
                int n2=nums[n-1];
                if(hash[n1]==1 && hash[n2]==1){
                    return max(n1,n2);
                }
                else if(hash[n1] == 1){
                    return n1;}
                else if(hash[n2] == 1) {
                    return n2;
                    }
                else{
                    return -1;
                    }
}
}
};