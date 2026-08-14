class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=0;
        vector<int> copy=nums1;
        while(i<m and j<n){
            if(copy[i]<=nums2[j]){
                nums1[k]=copy[i];
                i++;
                k++;
            }
            else{
                nums1[k]=nums2[j];
                j++;
                k++;
            }
        }
        while(i<m){
            nums1[k]=copy[i];
            i++;
            k++;
        }
        while(j<n){
            nums1[k]=nums2[j];
            j++;
            i++;
            k++;
        }
    }
};