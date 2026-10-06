class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n=nums.size();
       if(n==1){
        return nums[0];
       }
       int sum=0;
       for(int i=0;i<k;i++){
        sum=sum+nums[i];
       }
       int max_sum=sum;
       int window_sum=sum;
       for(int j=k;j<n;j++){
        window_sum+=nums[j]-nums[j-k];
        max_sum=max(max_sum,window_sum);
       }
       return (double)max_sum/k;
    }
};