
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

void sortList(Node* head) {
    int cnt[3] = { 0, 0, 0 };
    Node* ptr = head;
    while (ptr != NULL) {
        cnt[ptr->data] += 1;
        ptr = ptr->next;
    }

    int idx = 0;
    ptr = head;
    while (ptr != nullptr) {
          
        if (cnt[idx] == 0)
            idx += 1;
        else {
            ptr->data = idx;
            cnt[idx] -= 1;
            ptr = ptr->next;
        }
    }
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
      cout << "\n";
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(0);

    cout << "Linked List before Sorting:";
    printList(head);
    sortList(head);

    cout << "Linked List after Sorting:";
    printList(head);

    return 0;
}
