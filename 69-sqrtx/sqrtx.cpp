class Solution {
public:
    int mySqrt(int x) {
       int low=0;
       int high=x;
       while(low<=high){
        int mid=low+(high-low)/2;
        long long sqr=1LL*mid*mid;
        if(x==sqr){
            return mid;
        }
        else if(x>sqr){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return high; 
    }
};