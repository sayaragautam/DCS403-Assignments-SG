#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
Node* insertBST(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);
    if (key < root->data)
        root->left = insertBST(root->left, key);
    else if (key > root->data)
        root->right = insertBST(root->right, key);

    return root;
}
Node* searchBST(Node* root, int key) {
    while (root != nullptr) {
        if (key == root->data)
            return root;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}
Node* findMin(Node* root) {
    while (root->left != nullptr)
        root = root->left;
    return root;
}
Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main() {
    Node* root = nullptr;
    int n, value, deleteKey, searchKey;
    cout << "Enter number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        root = insertBST(root, value);
    }
    cout << "\nInorder Traversal: ";
    inorder(root);
    cout << "\n\nEnter key to delete: ";
    cin >> deleteKey;
    root = deleteNode(root, deleteKey);
    cout << "Inorder After Deletion: ";
    inorder(root);
    cout << "\n\nEnter key to search: ";
    cin >> searchKey;
    Node* result = searchBST(root, searchKey);
    if (result != nullptr)
        cout << "Key exists in BST." << endl;
    else
        cout << "Key does not exist in BST." << endl;
    return 0;
}