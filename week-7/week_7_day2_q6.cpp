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
Node* deleteAtPosition(Node* head, int position) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return head;
    }
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* current = head;
    for (int i = 1; i < position - 1 && current->next != nullptr; i++) {
        current = current->next;
    }

    if (current->next == nullptr) {
        cout << "Position out of range." << endl;
    } else {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    return head;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);
    traverseLinkedList(head);

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    head = deleteAtPosition(head, pos);
    traverseLinkedList(head);
    return 0;
}
