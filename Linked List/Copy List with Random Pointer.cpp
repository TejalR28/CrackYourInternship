/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;
        
        unordered_map<Node*, Node*> node;
        
        Node* curr = head;
        while (curr) {
            node[curr] = new Node(curr->val);
            curr = curr->next;
        }
        
        curr = head;
        while (curr) {
            node[curr]->next = node[curr->next];
            node[curr]->random = node[curr->random];
            curr = curr->next;
        }
        
        return node[head]; 
    }
};