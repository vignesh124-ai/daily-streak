class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
       int ma=INT_MIN;
       int i=0;
       int j=n-1;
       while(i<=j){
        int wat=min(height[i],height[j])*(j-i);
        ma=max(ma,wat);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
       }
       return ma;
    }
};