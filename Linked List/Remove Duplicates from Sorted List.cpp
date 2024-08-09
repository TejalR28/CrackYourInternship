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
       if(!head){
        return NULL;
       } 
       ListNode*temp = head;
       ListNode*temp1=head->next;
       int last = head->val;
       while(temp1!=NULL){
        if(temp1->val==last){
        if(temp1->next == NULL){
            temp->next = NULL;
            break;
        }
        temp1=temp1->next;
        temp->next = temp1;
        }
        else{
            temp = temp1;
            last = temp->val;
            temp1= temp1->next;
        }
       }
       return head;
    }
};