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
    if (root == nullptr) {
        return new Node(key);
    }
    if (key < root->data) {
        root->left = insertBST(root->left, key);
    }
    else if (key > root->data) {
        root->right = insertBST(root->right, key);
    }
    else {
        cout << "Duplicate key ignored: " << key << endl;
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
    root = insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);
    insertBST(root, 70);
    cout << "Inorder Traversal: ";
    inorder(root);
    return 0;
}