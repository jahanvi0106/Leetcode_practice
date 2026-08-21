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
    ListNode* reverseLinkedList(ListNode* head) {
        if (head == NULL || head->next == NULL) 
            return head;  
        ListNode* newHead = reverseLinkedList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }

    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL) 
            return true;  
    
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next ;
        }
        ListNode *temp = reverseLinkedList(slow->next);
        fast = head;
        slow = temp;
        while (slow != NULL) {
            if (fast->val != slow->val) {
                return false;
            }
            fast = fast->next;  
            slow = slow->next; 
        }
        return true;
    }
};