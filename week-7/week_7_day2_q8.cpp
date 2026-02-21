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
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}
int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);
    cout << "Number of nodes: " << countNodes(head) << endl;
    return 0;
}