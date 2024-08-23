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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL || head->next==NULL)
            return head;

        int arr[201];
        ListNode* temp = head;
        while(temp!=NULL){
            arr[(temp->val)+100]=1;
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
        temp=head;
        ListNode* pr=NULL;
        for(int i=0; i<201; i++){
            if(arr[i]==1){
                temp->val=i-100;
                cout<<temp->val<<" ";
                pr=temp;
                temp=temp->next;
            }
        }
        cout<<endl;
        pr->next=NULL;
        return head;
    }
};