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
        
        ListNode* start = new ListNode();
        ListNode* temp = start;
        int carry = 0;
        while(l1 && l2){
            ListNode* t = new ListNode();
            if(l1->val + l2->val + carry > 9){
                t->val = (l1->val + l2->val + carry)%10;
                carry = 1;
            }
            else{
                t->val = (l1->val + l2->val + carry);
                carry=0;
            }
            temp->next = t;
            temp = temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            ListNode* t = new ListNode();
            if(l1->val + carry > 9){
                t->val = (l1->val + carry)%10;
                carry = 1;
            }
            else{
                t->val = (l1->val + carry);
                carry=0;
            }
            temp->next = t;
            temp = temp->next;
            l1=l1->next;
        }
        while(l2){
            ListNode* t = new ListNode();
            if(l2->val + carry > 9){
                t->val = (l2->val + carry)%10;
                carry = 1;
            }
            else{
                t->val = (l2->val + carry);
                carry=0;
            }
            temp->next = t;
            temp = temp->next;
            l2=l2->next;
        }
        if(carry == 1){
            ListNode* t = new ListNode();
            t->val = 1;
            temp->next = t;
        }
        return start->next;
    }
};