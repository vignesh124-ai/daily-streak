class Solution {
public:
    string multiply(string num1, string num2){
        int l=num1.length()+num2.length();
        vector<int> arr(l,0);
        for(int i=num1.length()-1;i>=0;i--){
            for(int j=num2.length()-1;j>=0;j--){
                arr[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                arr[i+j]+=arr[i+j+1]/10;
                arr[i+j+1]=arr[i+j+1]%10;
            }
        }
        int beg=0;
        int n=arr.size();
        while(beg<n-1 && arr[beg]==0){
                beg++;
        }
        string s="";
        for(int k=beg;k<n;k++){
            s+=char(arr[k]+'0');
        }
        return s;
    }
};