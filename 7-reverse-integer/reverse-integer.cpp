class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int i=0;
        while(x!=0){
            int last=x%10;
            rev=rev*10+last;
            x=x/10;
            i++;
        }
        if(rev>=INT_MIN && rev<=INT_MAX){
            return rev;
        }
        else{
            return 0;
        }
    }
};