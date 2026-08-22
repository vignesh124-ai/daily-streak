class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int m=n;
        while(n>0){
            int ld=n%10;
            sum=sum+ld;
            mul=mul*ld;
            n=n/10;
        }
        if(m%(sum+mul)==0){
            return true;
        }
        else{
            return false;
        }
    }
};