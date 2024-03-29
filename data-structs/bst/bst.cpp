#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

node *insertElement(node *root, int val)
{
    if (root == NULL)
        return new node(val);

    if (root->data < val)
    {
        root->right = insertElement(root->right, val);
    }
    else if (root->data > val)
    {
        root->left = insertElement(root->left, val);
    }

    return root;
}

void preOrderTraversal(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

node *searchTree(node *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }

    if (key > root->data)
    {
        return searchTree(root->right, key);
    }
    else if (key < root->data)
    {
        return searchTree(root->left, key);
    }

    return root;
}
int main()
{
    node *root = new node(10);
    insertElement(root, 20);
    insertElement(root, 30);
    insertElement(root, 40);
    insertElement(root, 50);
    preOrderTraversal(root);

    if (searchTree(root, 60)){
        cout <<"key found !";}
    else {
        cout <<"key not found !";}
    return 0;
}