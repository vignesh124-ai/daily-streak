class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int mind=INT_MAX;
        if(n==1){
            return 0;
        }
        else{
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n-k;i++){
            int diff=nums[k+i-1]-nums[i];
            mind=min(diff,mind);
        }
        return mind; 
        }
    }
};