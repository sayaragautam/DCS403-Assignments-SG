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
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    return newNode;
}
int main() {
    int arr[] = {20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);
    traverseLinkedList(head);
    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;
    head = insertAtBeginning(head, value);
    traverseLinkedList(head);
    return 0;
}