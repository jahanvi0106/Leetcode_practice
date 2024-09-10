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

//  ans = __gcd(ans, numbers[i]);
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp=head;
        while(temp->next){
            ListNode* n = new ListNode(__gcd(temp->val,temp->next->val));
            n->next=temp->next;
            temp->next=n;
            temp=temp->next->next;
        }
        return head;
    }
};