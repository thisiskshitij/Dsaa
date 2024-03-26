#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
   
    Node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

void printInorder(Node *node)
{
    if (node == NULL)
        return;
    // Traverse left subtree
    printInorder(node->left);
    // Visit node
    cout << node->data << " ";
    // Traverse right subtree
    printInorder(node->right);
}

void printPreOrder(Node *node)
{
    if (node == NULL)
        return;

    // Visit Node
    cout << node->data << " ";

    // Traverse left subtree
    printPreOrder(node->left);

    // Traverse right subtree
    printPreOrder(node->right);
}
// void printPostOrder(Node* node)
// {
//     if (node == NULL)
//         return;

//     // Traverse left subtree
//     printPostOrder(node->left);

//     // Traverse right subtree
//     printPostOrder(node->right);

//     // Visit node
//     cout << node->data << " ";
// }

void printPostOrder(Node *node)
{
    if (node == NULL)
        return;
    printPostOrder(node->left);
    printPostOrder(node->right);
    cout << node->data << " ";
}
void insertElement(Node *node){

}

Node* searchTree(Node* root, int key){
    if( root == NULL || root->data == key ){ //handle root is null first
        return root;
    }

    if(key>root->data)
        searchTree(root->right,key);
    
    else
        searchTree(root->left,key);

}

Node* insertEle(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    
    if (val > root->data)
        root->right = insertEle(root->right,val);
    else if(val<root->data)
        root->left = insertEle(root->left,val);
    
    return root;
}
int main()
{
    //     // create a root node
    //     Node *root = new Node(1);
    //     root->left = new Node(2);
    //     root->right = new Node(3);
    //     root->left->left = new Node(4);
    //     /*       1
    //            /   \
//               2     3
    //          / \    / \
//             4 NULL NULL NULL
    //       /   \
//         NULL  NULL
    // */
    Node *root = new Node(100);
    root->left = new Node(20);
    root->right = new Node(200);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->left = new Node(150);
    root->right->right = new Node(300);

    insertEle(root,301);

    // printInorder(root);
    // cout << endl;
    // printPreOrder(root);
    // cout << endl;
    printPostOrder(root);
    cout <<endl;


    if(searchTree(root,300)){
        cout <<"Key found !";
    }
    else{
        cout <<"Key not found !";
    }
    

    return 0;
}