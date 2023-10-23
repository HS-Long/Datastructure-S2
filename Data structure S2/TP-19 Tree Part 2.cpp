#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int data)
    {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
void inorderTraversal(struct Node *node){  //display
    if(node == NULL)
 
   return;

   inorderTraversal(node-> left);
   cout <<node->data << " ";
   inorderTraversal(node -> right);
}
void preorderTraversal(struct Node* node) {    // pi toch tv thom
 if (node == NULL)
 return;
 cout << node->data << " ";
 preorderTraversal(node->left);
 preorderTraversal(node->right);
}

void postorderTraversal(struct Node* node) {   
 if (node == NULL)
 return;
 postorderTraversal(node->left);
 postorderTraversal(node->right);
 cout << node->data << " ";



}
// void Display(Node *ptr)
// {
//     if (ptr != NULL)
//     {
//         Display(ptr->left);
//         cout << " " << ptr->data << "" ;
//         Display(ptr->right);
//     }
// }

main()
{
     
    struct Node *root = new Node(5);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
   cout << "Inorder : \n";
    inorderTraversal(root);
    cout << "\n\n";
    cout << "Preorder : \n";
    preorderTraversal(root);
    cout << "\n\n";
    cout << " posorder : \n";
    postorderTraversal(root);
}