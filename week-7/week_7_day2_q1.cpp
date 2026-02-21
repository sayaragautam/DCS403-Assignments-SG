#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;
    Node* head = new Node();
    head->data = arr[0];
    head->next = nullptr;
    Node* current = head;
    for (int i = 1; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = nullptr;
        current->next = newNode;
        current = newNode;
    }
    return head;
}
void traverseLinkedList(Node* head) {
    if (head == nullptr) {
        cout << "Linked list is empty." << endl;
        return;
    }
    Node* current = head;
    cout << "Linked list elements: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);
    traverseLinkedList(head);
    return 0;
}