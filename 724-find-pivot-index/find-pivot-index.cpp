class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int pivot=-1;
        if (n == 0) {
            return -1;
        }
        if (n == 1) {
            return 0;
        }
        int tsum = 0;
        for (int i = 0; i < n; i++) {
            tsum += nums[i];
        }
        int left = 0;
        for (int j = 0; j < n; j++) {
            int right = tsum - left - nums[j];
            if (left == right) {
                pivot = j;
                break;
            }
            left += nums[j];
        }
        return pivot;
    }
};