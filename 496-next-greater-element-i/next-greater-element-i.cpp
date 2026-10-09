class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> res(nums1.size(),-1);
        vector<int> dup(nums2.size(),-1);
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && nums2[i]>=st.top()){
                st.pop();
            }
            if(!st.empty()){
            dup[i]=st.top();
            }
            st.push(nums2[i]);
        }
        for(int k=0;k<nums1.size();k++){
            if(mp.find(nums1[k])!=mp.end()){
                res[k]=dup[mp[nums1[k]]];
            }
        }
        return res;
    }
};