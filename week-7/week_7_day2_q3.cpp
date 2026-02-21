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
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        return newNode;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
int main() {
    int arr[] = {10, 20, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);
    traverseLinkedList(head);
    int value;
    cout << "Enter value to insert at end: ";
    cin >> value;
    head = insertAtEnd(head, value);
    traverseLinkedList(head);
    return 0;
}