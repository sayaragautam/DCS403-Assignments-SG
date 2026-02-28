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
Node* findMinRecursive(Node* root) {
    if (root == nullptr || root->left == nullptr)
        return root;
    return findMinRecursive(root->left);
}
Node* findMaxRecursive(Node* root) {
    if (root == nullptr || root->right == nullptr)
        return root;
    return findMaxRecursive(root->right);
}
Node* findMinIterative(Node* root) {
    if (root == nullptr)
        return nullptr;
    while (root->left != nullptr)
        root = root->left;
    return root;
}
Node* findMaxIterative(Node* root) {
    if (root == nullptr)
        return nullptr;
    while (root->right != nullptr)
        root = root->right;
    return root;
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
    Node* minRec = findMinRecursive(root);
    Node* maxRec = findMaxRecursive(root);
    Node* minItr = findMinIterative(root);
    Node* maxItr = findMaxIterative(root);
    cout << "Recursive Min: " << (minRec ? minRec->data : -1) << endl;
    cout << "Recursive Max: " << (maxRec ? maxRec->data : -1) << endl;
    cout << "Iterative Min: " << (minItr ? minItr->data : -1) << endl;
    cout << "Iterative Max: " << (maxItr ? maxItr->data : -1) << endl;
    return 0;
}