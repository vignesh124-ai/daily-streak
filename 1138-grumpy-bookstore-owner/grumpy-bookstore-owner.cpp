class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum=0;
        int val=0;
        int n=customers.size();
        for(int k=0;k<n;k++){
            if(grumpy[k]==0){
                val=val+customers[k];
            }
        }
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1){
                sum=sum+customers[i];
        }
        }
        int max_cus=sum;
        for(int j=minutes;j<n;j++){
            if(grumpy[j]==1){
                sum=sum+customers[j];
            }
            if(grumpy[j-minutes]){
                sum=sum-customers[j-minutes];
            }
            max_cus=max(max_cus,sum);
        }
        return max_cus+val;
    }
};