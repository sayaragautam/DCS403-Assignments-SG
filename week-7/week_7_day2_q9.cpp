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
Node* insertAfterValue(Node* head, int X, int Y) {
    Node* current = head;
    while (current != nullptr && current->data != X) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << X << " not found in the list." << endl;
        return head;
    }
    Node* newNode = new Node();
    newNode->data = Y;
    newNode->next = current->next;
    current->next = newNode;

    return head;
}
int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);
    traverseLinkedList(head);
    int X, Y;
    cout << "Enter value X (after which to insert) and Y (value to insert): ";
    cin >> X >> Y;
    head = insertAfterValue(head, X, Y);
    traverseLinkedList(head);
    return 0;
}