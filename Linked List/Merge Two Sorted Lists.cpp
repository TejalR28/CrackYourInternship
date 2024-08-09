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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         if(list1==NULL){   
            return list2; 
        }
        if(list2==NULL){  
            return list1;
        }

        ListNode*List3 = new ListNode(0);  
        ListNode*ptr = List3;             

        while(list1 && list2){ 
            if(list1->val <= list2->val){    
                ptr->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else{         
                ptr->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            ptr = ptr ->next;
        }  
        while(list1){
            ptr->next = new ListNode(list1->val);
            list1 = list1->next;
            ptr = ptr->next;
        }
        while(list2){
            ptr->next  = new ListNode(list2->val);
            list2 = list2->next;
            ptr = ptr->next;
        }
  
        return List3->next;
    }
};