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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode*node = NULL,*ptr = head;
        while(ptr != NULL){
            ListNode*temp = new ListNode(ptr->val);
            temp ->next = node;
            node = temp;
            ptr = ptr->next;
        }
        while(head && node){
            if(head->val != node->val){
                return false;
            }
            head = head->next;
            node = node->next;
        }
        return true;
    }
};