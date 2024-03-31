#include <iostream>
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current->next != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create nodes for the linked list
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);

    // Connect the nodes to form the linked list
    head->next = second;
    second->next = third;

    // Print the linked list
    std::cout << "Linked List: ";
    printLinkedList(head);

    // Free memory allocated for the linked list nodes
    delete head;
    delete second;
    delete third;

    return 0;
}
