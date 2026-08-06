class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
        int sum=1;
        int temp=n;
        while(temp>0){
            int rem=temp%10;        
            temp=temp/10;
            sum=sum*rem;
            }
        if(sum%t==0){
            return n;
        }
        n=n+1;
    }
    }
};