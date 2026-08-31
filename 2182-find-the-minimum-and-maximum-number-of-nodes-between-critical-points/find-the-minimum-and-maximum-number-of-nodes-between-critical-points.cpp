/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* prev=head;
        ListNode* nex=temp->next;
        int c=1;
        vector<int> crt;
        vector<int> res={-1,-1};
        if(prev->next->next==nullptr){
            return res;
        }
        while(prev && temp && nex){
            if((temp->val<nex->val && temp->val<prev->val) || (temp->val>nex->val && temp->val>prev->val)){
                crt.push_back(c);
            }
            prev=temp;
            temp=nex;
            nex=nex->next;
            c++;
        }
        int n=crt.size();
        if(n==0 || n==1){
            return res;
        }
        int mind=INT_MAX;
        int maxd=crt[n-1]-crt[0];
        int i=0;
        int j=i+1;
        while(j<n){
            mind=min(abs(crt[i]-crt[j]),mind);
            i++;
            j++;
        }
        res[0]=mind;
        res[1]=maxd;
        return res;
    }
};