class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(),nums1.end());
        set<int> res;
        for(int x:nums2){
            if(s1.count(x)){
                res.insert(x);
            }
        }
        return vector<int>(res.begin(),res.end());
    }
};