class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int max_id=0;
        int min_id=0;
        int max_num=INT_MIN;
        int min_num=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(max_num<nums[i]){
                max_id=i;
                max_num=nums[i];
            }
            if(min_num>nums[i]){
                min_id=i;
                min_num=nums[i];
            }
        }
        int n=nums.size();
        int front=min(min_id,max_id);
        int back=max(min_id,max_id);
        return min({back + 1,n- front,front+1+(n- back)});
    }
};