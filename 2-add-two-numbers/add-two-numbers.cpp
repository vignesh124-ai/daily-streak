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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* curr=dummy;
        ListNode* p1=l1;
        ListNode* p2=l2;
        int carry=0;
        while(p1!=nullptr || p2!=nullptr || carry!=0){
            int x = (p1 != nullptr) ? p1->val : 0;
            int y = (p2 != nullptr) ? p2->val : 0;
            int sum = x + y + carry;
            int digit=sum%10;
            carry=sum/10;
            curr->next=new ListNode(digit);
            curr=curr->next;
            if(p1!=nullptr){
                p1=p1->next;
            }
            if(p2!=nullptr){
                p2=p2->next;
            }
            }
            return dummy->next;
        }
};
