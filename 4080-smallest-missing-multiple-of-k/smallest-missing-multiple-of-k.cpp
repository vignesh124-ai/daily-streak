class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int j=1;
        while(true){
            if(mpp.contains(k*j)){
                j++;
            }
            else{
                return k*j;
            }
        }
    }
};