class Solution {
public:
int sumnum(vector<int> v,int begin,int end){
    int sum=0;
    if(begin>end){
        return 0;
    }
    for(int i=begin;i<=end;i++){
        sum+=v[i];
    }
    return sum;
}
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return 0;
        }
        int pivot=-1;
        for(int i=0;i<n;i++){
            int leftsum=sumnum(nums,0,i-1);
            int rightsum=sumnum(nums,i+1,n-1);
            if(leftsum==rightsum){
                pivot=i;
                break;
            }
        }
        return pivot;
    }
};